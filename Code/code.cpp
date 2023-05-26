
#include<iostream>

//function to get number of buckets
void histogram::get_number_of_buckets(ll bucket_size)
{
	
	int size = list.size();
		
	//finding the maximum element in the vector
	ll max_element = list[0];
	for(int i = 1; i < size ; i++){
			if(list[i] > max_element)
				max_element = list[i];
	}
		
	//formula to get the number of buckets
	number_of_buckets = (max_element % bucket_size == 0 ) ? (max_element / bucket_size) : (max_element / bucket_size) + 1;
}

//function to make histogram
void histogram::make_histogram(ll bucket_size)
{
	
	for(int i=0;i<size;i++)
	{
		if(list[i]>0)
			{
				if(list[i] % bucket_size == 0)
				{
					hist[(list[i]/ bucket_size)-1]++;
				}
				else
				{
					hist[list[i]/ bucket_size]++;
				}
			}
	}

}

//function to print the histogram
void histogram::print_histogram(ll bucket_size)
{
	
	int st = 1, en = st + bucket_size - 1; 
		
	for(int i=0; i < hist.size(); i++)
	{
		cout<<st<<" "<< "to"<<" "<<en<< ": "<<hist[i]<<endl;
		st = en + 1;
		en = st + bucket_size - 1;
	}
		
}