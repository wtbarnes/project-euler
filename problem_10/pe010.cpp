#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	//Initialize list of primes
	int pl[] = {2,3,5,7};
	vector<long int> prime_list(&pl[0],&pl[0]+4);
	long int test_num = prime_list.back();
	int num_primes = prime_list.size();
	int i;
	bool no_prime = false;
	int max_num = 2000000;
	long int prime_sum = 0;
	
	//Initialize the prime sum
	for(i=0;i<num_primes;i++)
	{
		prime_sum += prime_list.at(i);
	}
	
	
	while(test_num < max_num)
	{
		//Increment the test number
		test_num = test_num + 1;
		//Test number versus all of the found primes
		for(i=0;i<num_primes;i++)
		{
			if(test_num % prime_list.at(i) == 0)
			{
				//Raise the no prime flag
				no_prime = true;
				break;
			}
		}
		
		//If the no prime flag wasn't raised, save the test number as a new prime
		if(no_prime == false)
		{
			//Add the new prime to the list
			prime_list.push_back(test_num);
			//Update the size of the list
			num_primes = prime_list.size();
			//Output what is being added to the sum
			//cout << test_num << " is being added to the prime sum." << endl;
			//Update the sum
			prime_sum += test_num;
		}
		
		//Reset the no prime flag
		no_prime = false;
	}
	
	//Print the last prime in the list
	cout << "The sum of all primes below " << max_num << " is " << prime_sum << endl;
	
	//Return 0 if no errors
	return 0; 
}