//@rofi

/*
18. Write functions to compute the factorial of a number using both recursive and non-recursive procedure.
*/
#include<iostream>
using namespace std;

//Non-recursive version
long long  int factorial_nr(int n)
{
	long long int fact = 1;
      for(int i=1; i<=n; i++){
      	fact *=i;
      }
      return fact;
}

//Recursive version
long long int factorial_rc(int n)
{
	if(n==0 || n==1)
		return 1;


	return n*factorial_rc(n-1);
}


int main(int argc, char const *argv[])
{
	int n;

	cout<<"Input a number to calculate factorial:";
	cin>>n;


	//display result
	cout<<"The factorial of"<<n<<" is: "
	    <<"\n <recursivly calculated> "<<factorial_rc(n)
	    <<"\n <non-recursivly calculated> "<<factorial_nr(n)<<"\n";
	return 0;
}