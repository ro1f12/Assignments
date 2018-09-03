//@rofi

/*
19. Write a program to print the values of ncr and npr   
for given positive integers n r > 0.  Use a function 
fact(n)to return the factorial of a non-negative integer n.
ncr=n!/r!*(n-r)!	npr=n!/(n-r)!
*/

#include <iostream>
using namespace std;


//Recursive version
long long int fact(int n)
{
	if(n==0 || n==1)
		return 1;


	return n*fact(n-1);
}


int main(int argc, char const *argv[])
{
	/* code */
	int n, r, n_P_r, n_C_r;


	//read n , r>0
	cout<<"Input 'n' and 'r'<positive integers>: ";
	cin>>n>>r;

	//calculate permutation
	n_P_r = fact(n)/fact(n-r);

	//combination
	n_C_r = fact(n)/(fact(r)*fact(n-r));


	//display
	cout<<"nPr = "<<n_P_r
	    <<"\nn_C_r = "<<n_C_r<<"\n";


	return 0;
}