//@rofi
/**
23. Write a program to display the upper Triangle and 
lower Triangle of a given square matrix using function.
*/
#include <iostream>
using namespace std;

//function to display a matrix
void display_matrix(int a[][10], int n)
{
    int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

//function to display upper triangular matrix
void upper_triangular(int a[][10], int n)
{
    int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			//check for upper triangular
			if(i<=j){
				cout<<a[i][j]<<" ";
			}else{
				cout<<"0"<<" ";
			}
		}
		cout<<"\n";
	}
	cout<<"\n";
}


//function to display lower triangular matrix
void lower_triangular(int a[][10], int n)
{
    int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			//check for upper triangular
			if(i>=j){
				cout<<a[i][j]<<" ";
			}else{
				cout<<"0"<<" ";
			}
		}
		cout<<"\n";
	}
	cout<<"\n";
}


int main()
{
	//test case
	int matrix[][10] = {
	     					{1,2,3},
                            {2,4,5},
                            {3,5,6}
     					};

    //Input matrix is
    cout<<"Input matrix : \n";
    display_matrix(matrix,3);


   //function call
   cout<<"upper triangular: \n";
   upper_triangular(matrix,3); 


   cout<<"lower triangular: \n";
   lower_triangular(matrix,3); 

	return 0;
}