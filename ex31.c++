//@rofi
/*
Write a program to convert a string from upper case to lower case and vice versa.
*/
#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
	char str[11] = "helloWORLD", nstr[11];

	//loop through string 
	int i=0;
	while(str[i] != '\0')
	{
		nstr[i] = islower(str[i])? toupper(str[i]): tolower(str[i]);
		i++;
	}

	//at the end add '\0'
	nstr[i++] = '\0';


	//display the case converted string
	cout<<str<<" is case converted to "<<nstr<<"\n";
	return 0;
}