#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	//Declare variables
	int i,n;
	int top = 999;
	int bottom = 100;
	int first, second;
	int max_pal = 0;
	int temp_pal;
	string palstr;
	
	//Initialize first and second numbers
	first = top;
	second = first;
	
	//Carry out multiplication to test palindrome
	while(first >= bottom)
	{
		while(second >= bottom)
		{
			//Create the potential palindrome
			temp_pal = first*second;
			
			//Test whether this is a palindrome
			palstr = to_string(temp_pal);
			n = palstr.size()/sizeof(char);
			//cout << "length of " << temp_pal << " is " << n << endl;
			if(n%2!=0)
			{
				break;
			}
			for(i=0;i<(n/2);i++)
			{
				//Compare characters in string
				if(palstr[i]!=palstr[n-1-i])
				{
					break;
				}
				
				//If we made it to the last iteration, save as the max palindrome
				if(i==(n/2-1))
				{	
					//Is this bigger than the last palindrome?
					if(temp_pal > max_pal)
					{
						max_pal = temp_pal;
						//Print this to the screen
						cout << "The max palindrome is " << max_pal << endl;
					}
				}
			}
			
			//Update the second number
			second = second - 1;
		}
		
		//Update the first number
		first = first - 1;
		//Reset the second number to start at the first
		second = first;
	}
	
	//Return 0 for no errors
	return 0;
}