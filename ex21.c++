//@rofi

/**
21. Write a program to display the prime numbers within a given range. 
Write a function to check whether a given integer is prime or not and use it.
*/

#include<iostream>
using namespace std;


//function to check prime number
bool is_prime(int n)
{
	if(n <=1){
		//check for 1
		return false;
	}
	
	for(int i=2; i<n/2; i++){

		//check for divisor
		if(n%i == 0){
			return false;
		}
	}

	return true;
}


int main(int argc, char const *argv[])
{
	int low, high;

	//read the range
	cout<<"Input the range <lower range - upper range> respectively: ";
	cin>>low>>high;

	//loop through all numbers in the range
	cout<<"The prime numbers in the given range are: ";
	for(int i=low; i<=high; i++){
        
        //cehck & display if prime 
		if(is_prime(i) == true){
			cout<<" "<<i;
		}
	}
	cout<<"\n";
	return 0;
}