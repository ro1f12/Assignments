//rofi
/*
27. Write a program to merge two sorted arrays.
*/
#include<iostream>
using namespace std;




int * merge(int a1[], int a2[], int n1, int n2) //Function for merging the sorted array
{
    int size ,i,j,k;
    size=n1+n2;
    int *arr;
    arr = new int[size];


     i=0;
     j=0;
     k=0;
    while(i<n1 && j<n2){
    	//traverse both arrays , compare & assign to result array
    	arr[k++] = (a1[i]<a2[j])? a1[i++]:a2[j++];
    }

    //remaing elements of first 
    while(i<n1){
    	arr[k++] = a1[i++];
    }

    //second 
    while(j<n2){
    	arr[k++] = a2[j++];
    }

    return arr;
}

int main()
{
	int a1[] = {1,2,5,7};
	int a2[] = {0,3, 8};
	int *result, i;


	result = merge(a1, a2, 4, 3);
        for(i=0;i<7; i++){
        	cout<<result[i]<<" ";
           }
        return 0;
}
