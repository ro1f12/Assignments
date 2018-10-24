//@rofi
/**
32. Write a program to swap two numbers using function (pass the pointers).
*/
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

int main(int argc, char const *argv[])
{
	int a, b;

    cout<<"Input two numbers";
	cin>>a>>b;
	cout<<"before swaping: "<<a<<" "<<b;


	swap(&a, &b);

	cout<<"\n after awaping : "<<a<<" "<<b<<"\n";

	return 0;
}
