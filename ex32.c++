//@rofi
/**
32. Write a program to swap two numbers using function (pass the pointers).
*/
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = temp;

}

int main(int argc, char const *argv[])
{
	int *a, *b;

	cin>>*a>>*b;
	cout<<a<<" "<<b;


	swap(a, b);

	cout<<*a<<" "<<*b;

	return 0;
}