//@rofi
/**
25. Write a program  to read a m x n matrix and
calculate the Row sum and Column Sum of the matrix
*/
#include <iostream>
using namespace std;
#define N 2
void multiply(int A[][N], int B[][N], int C[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
}

//driver code
int main()
{
    int A[2][2] = {{1,2},{1,2}};
    int  B[2][2] = {{1,2},{1,2}};
    int C[2][2] = {0};
    int i=0,j=0;

    multiply(A,B,C);

    cout<<"Matrices are:\n"<<"A:\n";
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"B:\n";
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"A*B:\n";
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

