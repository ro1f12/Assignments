/**
@rofi
*/

/*11. Write a program to print the digits of a number in words.
 ( eg. if a number 841 is entered through the keyboard your program should print “Eight Four One”.)  
 */
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, digits_rev[100], i=0;

	cout<<"Input a number:";
	cin>>n;

	int t = n;
	//store the digits in an array
	while(t != 0){
		digits_rev[i++] = t%10;
		t = t/10;
	}


	//display the numbers in words from digits_rev array
	cout<<"\nThe number "<<n<<" in words as: ";
	for(int j=i-1; j>=0; j--){

		//loop through the array
		int digit = digits_rev[j];
		switch(digit)
		{
			case 0 : cout<<" Zero";
					 //break;
			case 1 : cout<<" One";
					 break;
			case 2 : cout<<" Two";
					 break;
		    case 3 : cout<<" Three";
					 break;
			case 4 : cout<<" Four";
					 break;

			case 5 : cout<<" Five";
					 break;
			case 6 : cout<<" Six";
			         break;
			case 7 : cout<<" Seven";
			         break;
			case 8 : cout<<" Eight";
					 break;
			case 9 : cout<<" One";
					 break;
			default  : break;

		}
	}
    cout<<"\n";



	return 0;
}

