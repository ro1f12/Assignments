/**
@rofi
*/

/*Biggest Of 3 Numbers Using Nested If*/
#include<iostream>
#include<cctype>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, c, biggest;
	cout<<"Input 3 Numbers:";
	cin>>a>>b>>c;


	if(a>b){
		biggest = a;
	}else{
		biggest = b;
	}

	if(biggest>c){
		cout<<"Biggest Number Is "<<biggest<<"\n";
	}else{
		biggest = c;
		cout<<"Biggest Number Is "<<biggest<<"\n";
	}

	return 0;
}


