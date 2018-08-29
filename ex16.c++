//@rofi

/**
16.  Write a program to find the sum of the following series
	1+x-x^3/3!+x^5/5!-x^7/7!+ . . . . . corrected up to the 3 decimal place.
*/

#include <iostream>
#include <cmath>
using namespace std;

float series_sum(x)
{
	//general term of the series is

}


int main(int argc, char const *argv[])
{
	int x;

	cout<<"Input value of X: ";
	cin>>x;


	//display the value corrected upto 3 decimal place
	cout<<"1+x-x^3/3!+x^5/5!-x^7/7!+ . . . . : = "<<series_sum(x)<<"\n"; 
	return 0;
}