
/*
12. Write a program to print the PASCAL Triangle up to the n-th row where n is an input to the program.
*/
#include<iostream>
#include<iomanip>
using namespace std;
void t_pascal(int n)
{
	int i,j,l,m;

	m=1;
	for(l=0; l<n; l++){

		for(i= 40- 3*l; i>0; i--){
			cout<<" ";
		}


		for(j=0; j<=l; j++){

			if((j==0) || (l==0)){
				m=1;
			}else{
				m = (m*(l-j+1))/j;
			}
			cout<<setw(6)<<m;
		}
		cout<<"\n";
	}

}
int main(int argc, char const *argv[])
{
	int row;
	cout<<"Input number of rows <maximum upto 14 would give a good view>:";
	cin>>row;
	t_pascal(row);
	
	return 0;
}
