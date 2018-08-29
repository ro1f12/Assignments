/**
@rofi
*/

/*ASCII value of a character*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	cout<<"Enter a char: ";
	cin>>ch;
	cout<<"ASCII of '"<<ch
	    <<"' is : "<<int(ch)<<"\n";
	return 0;
}