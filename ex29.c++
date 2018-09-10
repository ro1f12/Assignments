//@rofi
/**
29. Write a program to   count the number of vowels in a string.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
	char str[11] = "helloworld";

	//loop through string 
	int i=0, c=0;
	while(str[i] != '\0')
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			//check tf the character is vowel
			c += 1;
		}
		i++;
	}

	//display the number of vowels in string
	cout<<"No of vowels in '"<<str<<"' is "<<c<<"\n";
	return 0;
}