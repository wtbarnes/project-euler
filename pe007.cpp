#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
	//Initialize list of primes
	int pl[] = {2,3,5,7,11,13};
	vector<long int> prime_list(&pl[0],&pl[0]+6);
	long int test_num = prime_list.back();
	int num_primes = prime_list.size();
	int i;
	bool no_prime = false;
	int max_primes =10001;
	
	while(num_primes < max_primes)
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
			num_primes = num_primes + 1;
			//Output the prime number
			cout << test_num << " is a prime number." << endl;
		}
		
		//Reset the no prime flag
		no_prime = false;
	}
	
	//Print the last prime in the list
	cout << "The " << max_primes << " prime in the list is: " << prime_list.back() << endl;
	
	//Return 0 if no errors
	return 0; 
}