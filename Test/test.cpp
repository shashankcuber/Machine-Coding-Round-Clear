#include "code.h"
#include "code.cpp"

void test_for_number_of_buckets(){
	vector<ll> test = {1, 30, 31, 71, 21, 40, 23, 45};
	ll bucket_size = 10;

	//creating object of histogram
	histogram *obj = new histogram(test, test.size());

	//calling helper function to calculate number of buckets
	obj->get_number_of_buckets(bucket_size);
	ll actual_number_of_buckets = obj->get_no_bucket();

	ll expected_number_of_buckets = 8;

	delete obj;
	
	assert(expected_number_of_buckets == actual_number_of_buckets);
}

void test_to_check_missing_element()
{
	vector<ll> test = {1, 30, 31, 71, 21, 40, 23, 45};
	ll expected_elements = test.size();
    ll bucket_size = 10;

	//creating object of histogram
	histogram *obj = new histogram(test, test.size());

	//calling all helper functions to create a histogram
	ll size = obj->get_no_bucket();
	
    vector<ll>hist(size,0);
	obj->put_histogram(hist);
    obj->make_histogram(bucket_size);
	vector<ll>test_histo = obj->get_histogram();

	ll actual_elements = 0;

	for(int i=0; i < test_histo.size(); i++){
		actual_elements += test_histo[i];
	}

	delete obj;
	assert(expected_elements == actual_elements);

}

void test_to_validate_histogram()
{
	vector<ll> test = {1, 30, 31, 71, 21, 40, 23, 45};
	ll bucket_size = 10;
    vector<ll>expected_histo = {1, 0, 3, 2, 1, 0, 0, 1};
	
	//creating object of histogram
	histogram *obj = new histogram(test, test.size());

	//calling all helper functions to create a histogram
	obj->get_number_of_buckets(bucket_size);
	ll size = obj->get_no_bucket();
	
    vector<ll>hist(size,0);
	obj->put_histogram(hist);
    obj->make_histogram(bucket_size);
	vector<ll>actual_histo = obj->get_histogram();

	delete obj;

	assert(expected_histo == actual_histo);
}