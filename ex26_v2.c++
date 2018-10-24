/**
@rofi
23-10-18
26. 
Write a function to read in an integer and print the representation of the number
using the sign and magnitude representation scheme using 8 bits. The program should
check for overflow/under flow conditions. The left most bit is to be used as the sign
 bit.
*/
#include<iostream>
#include<cmath>
using namespace std;
void signed_bit_represenation(int dec_num)
{
  //8-bit representation 
	int bin[8] = {0};
	
	//sign bit set
	bin[0] = (dec_num < 0)? 1:0;  //as lsb is the sign bit


  //only magnitude required
	int n = fabs(dec_num);
	int i = 7; 
    while (n > 0)
    { 
      // storing remainder in binary array 
      bin[i] = n % 2; 
      n = n / 2; 
      i--; 
    }


    //display the binary number
    for(int j=0; j<8; j++)
    {
       cout<<bin[j];
    } 
    cout<<"\n";
}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Input a number :";
	cin>>n;

  //check for overflow or underflow
  if(n > 127){
    cout<<"Error: Overflow!!!!\n";
    return 1;
  }
  if(n < -127){
    cout<<"Error: Underflow!!!!\n";
    return 1;
  }


  cout<<"The signed-magnitude representation of `"<<n<<"` is : ";
	signed_bit_represenation(n);
  cout<<"\n";
	return 0;
}
