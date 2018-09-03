//@rofi

/**
20. Write a program to display the first n Fibonacci numbers using function.
*/

#include<iostream>
using namespace std;

//displays first n fibonacci numbers
//dynamic programming version(memoization...)
void fib(int n)
{
  //array to store Fibonacci numbers.
  int f[n+2];   // 1 extra to handle case, n = 0
  int i;
 
  //0th and 1st number of the series are 0 and 1
  f[0] = 0;
  f[1] = 1;
  cout<<f[0]<<" "<<f[1];
 
  for (i = 2; i < n; i++)
  {
      //add the previous 2 numbers
      f[i] = f[i-1] + f[i-2];
      cout<<" "<<f[i];
  }

}


//general version
void fibo_nr(int n)
{
	int f_1 = 0, f_2 = 1, c=2;

	cout<<" "<<f_1<<" "<<f_2;

	for(int i=2; i<n; ++i)
	{
		int f= f_1 + f_2;
		cout<<" "<<f;

		f_1=f_2;
		f_2=f;
	}
	
}





int main(int argc, char const *argv[])
{
	/* code */
	fibo_nr(10);
	cout<<"\n";
	return 0;
}