#include "code.h"
#include "code.cpp"

//function to read the file
vector<ll> read_file(ll &bucket_size)
{
	vector<ll>list;

	ifstream file;
	file.open("input.txt");
	
	if(!file.is_open()){
		cout<<"Error in opening the file"<<endl;
	}
	else {
		
		string number = "";
		
			
			
			while(getline(file, number, ','))
			{
				list.push_back(stoi(number));
			}
			
			file.close();
		}
		
		//reading for getting non comma separated data        
		file.open("input.txt");
		
		if(!file.is_open()) {
			cout<<"Error in opening the file"<<endl;
		}
		
		else {
		
			string number1 = "", number = "";
				
			while(getline(file, number))
			{
				 number1 = number;
				 bucket_size = stoll(number);
			}
			
			
			file.close();	
			
	  }	

	return list;	
			
}


//driver code
int main()
{
    vector<ll>A;
    ll bucket_size;
	
    A = read_file(bucket_size);
	
    ll size_of_A = A.size();
	
       //calling constructor to initialise the attributes
    histogram *obj = new histogram(A, size_of_A);
     
    obj->get_number_of_buckets(bucket_size);	
	
    ll size = obj->get_no_bucket();
	
    vector<ll>hist(size,0);
    obj->put_histogram(hist);
    obj->make_histogram(bucket_size);	
	
    obj->print_histogram(bucket_size);

	  delete obj;

	  return 0;
}
