#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	//Variable Declarations
	ifstream infile;
	int array_len = atoi(argv[2]);
	long int num_array[array_len];
	int num_prod;
	char num;
	int i,j;
	long int prod,temp_prod;
	
	//Make sure a filename has been provided
	if(argc<=2)
	{
		cout << "Filename not provided. Please provide an input filename.";
		exit(1);
	}
	
	//Open the textfile
	infile.open(argv[1]);
	
	//Read into the array
	i = 0;
	while(infile.get(num))
	{
		//Read in each entry into the array
		num_array[i] = atoi(&num);
		i++;
	}
	
	//Search through products of 13 consecutive numbers to find largest product
	num_prod = 13;
	//Initialize the product
	prod = 1;
	for(i=0;i<(array_len - num_prod);i++)
	{	
		//Reset the temp_prod for each i
		temp_prod = 1;
		
		//Starting with each i, taking the product of the 13 consecutive numbers
		for(j=0; j<num_prod; j++)
		{
			temp_prod = temp_prod*num_array[i+j];
		}
		
		//DEBUG
		if(temp_prod < 0)
		{
			cout << temp_prod << endl;			
		}
		
		//If the next product is larger than the last, replace it
		if(temp_prod > prod)
		{
			prod = temp_prod;
		}
	}
	
	//Print the final result
	cout << "The largest product is " << prod << endl;
	
	//Return 0 for no error
	return 0;
	
}