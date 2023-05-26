#include "test.h"
#include "test.cpp"

int main()
{
    //calling test functions
	test_for_number_of_buckets();
	test_to_check_missing_element();
	test_to_validate_histogram();

    return 0;
}