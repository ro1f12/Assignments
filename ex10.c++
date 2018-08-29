/**
@rofi
*/

/*roots of a quadratic equation*/
#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	float a, b, c, D;

	//read a , b, c
	cout<<"Input the co-efficients: ";
	cin>>a>>b>>c;


	//calculte discriminent
	D = b*b - 4*a*c;


	//check root type
	if(D<0){
		//roots are complex
		cout<<"\nRoots Are Complex.";
	}else{
		//Display the roots

		//first root
		int x = (-b + sqrt(D)) / 2*a;

		//second root
		int y = (-b - sqrt(D)) / 2*a;

		cout<<"\nRoots are: "<<x<<" and "<<y<<".\n";

	}
	return 0;
}