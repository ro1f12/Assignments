//@rofi
/**
28. Write a program to implement selection sort using function.
*/

#include<iostream>
using namespace std;

void selection_sort(int a[], int n)
{
	int i, j, least, temp;

	for(i=0; i<n-1; i++)
	{
		
		//considering minimum valued index
		least = i;
		for(j=i+1; i<n; i++)
			//check
			//least = a[j]< a[least] ? j : least;
			if(a[j]< a[least]){
				least = j;
			}
		


		//swap the minimum value with the current position value
		temp = a[i];
		a[i] = a[least];
		a[least] = temp;
	}
}

int main(int argc, char const *argv[])
{
	int a[] = {1,20,11,8,22,19};

	int size = sizeof(a)/sizeof(a[0]);
	//displaying before and after sorting
	//cout<<"before selection_sort: ";
	//for(int i=0; i<size; i++){cout<<a[i]<<" ";}
	cout<<"\n";

	//sort 
    selection_sort(a,size);
    cout<<"after selection_sort: ";
    for(int i=0; i<size; i++){cout<<a[i]<<" ";}
	cout<<"\n";


	return 0;
}