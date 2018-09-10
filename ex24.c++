//rofi
/*
24. Write a function to check if a given square matrix is symmetric or not.
 Write a main function to implement it.
**/

#include <iostream>
using namespace std;



//inputed matrix can be 10x10 ordered matrix or lesser 
bool is_symmetric(int matrix[][10], int n)
{
	int i=0,j=0;

	//check if every matrix[i][j] = matrix[j][i] or not
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			//condition
			if(matrix[i][j] != matrix[j][i]){
				return false;
			}
		}
	}

    //if all are same 
	return true;
}

int main()
{
	//test case
	int matrix[][10] = {
	     					{1,2,3},
                            {2,4,5},
                            {3,5,6}
     					};


    //function call
    cout<<(is_symmetric(matrix,3)? "The given matrix is symmetric.\n":"The given matrix is asymmetric.\n"); 					
	return 0;
}