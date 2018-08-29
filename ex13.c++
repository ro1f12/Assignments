/*rofi*/
/*
13. Write a function to return the HCF of two positive integers. 
Write a main function to read two positive integers and print their HCF and LCM by using the above function.
*/

#include<iostream>
using namespace std;

//function to calculate HCF
int hcf(int a, int b)
{
	if(a == 0){
		return b;
	}
	return hcf(b%a, a);
}


int main(int argc, char const *argv[])
{
	int a, b, y, x;


	cout<<"Input two numbers to calculate HCF and LCM:";
	cin>>a>>b;

	y = hcf(a,b);

	//relation HCF*LCM = num1 * num2
	x = (a*b)/y;

	cout<<"HCF & LCM of "<<a<<" and "<<b<<" are "<<y<<","<<x<<" respectively.\n";
	return 0;
}