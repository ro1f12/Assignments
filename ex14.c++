//@rofi

/**
14. Write a program to convert a decimal number into binary number using function.
*/
#include <iostream>
using namespace std;

void to_binary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for(int i = 31; i >= 0; i--) 
    {
        int k = n >> i;
        if (k & 1)
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<"\n";
}

int main(int argc, char const *argv[])
{
	int n;

	cout<<"Input a number to convert into binary:";
	cin>>n;


	cout<<"The binary form of "<<n<<" is: ";
	//call
	to_binary(n);


	return 0;
}