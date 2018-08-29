/**
@rofi
*/

/*using switch case*/
#include<iostream>
using namespace std;

int main()
{
	int n, x;

	//read n x
	cout<<"Input the values of n and x:";
	cin>>n>>x;


	//switch case
	switch(n){
		case 1:cout<<"Output: "<<(n+x)<<"\n";
		       break;
		case 2:cout<<"Output: "<<float(1 + (x/n))<<"\n";
		       break;
		case 3:cout<<"Output: "<<(n + 3*x)<<"\n";
		       break;
		default:cout<<"Output: "<<(1+ n*x)<<"\n";
		        

	}
	return 0;
}