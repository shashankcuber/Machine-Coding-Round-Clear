#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#define ll long long int

using namespace std;


class histogram
{
	vector<ll>list;
	ll size;
    ll number_of_buckets;
	vector<ll>hist;

	public:
	//constructor
	histogram(vector<ll>a, ll s)
	{
		list = a;
		size = s;
	}
    
    //utility function
    ll get_no_bucket(){
        return number_of_buckets;
    }
	void put_histogram(vector<ll>h){
		hist = h;
	}
	vector<ll> get_histogram(){
		return hist;
	}
    //member functions
    void get_number_of_buckets(ll bucket_size);
    void make_histogram(ll bucket_size);
    void print_histogram(ll bucket_size);

};    