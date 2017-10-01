#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int collatz_rule(int);

int main()
{
	
}

int collatz_rule(int n)
{
	int result;
	
	if(n%2==0)
	{
		result = n/2;
	}
	else
	{
		result = 3*n + 1;
	}
	
	return result;
}