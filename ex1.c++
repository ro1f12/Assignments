/**
@rofi
*/

/*convert temperature from celcius scale to fehrenheit scale & vise versa*/
#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;

/**
*converts temp
by default choice 
is to convert 
to fehrenheiht
**/

float convert_temp(float temp,char choice = 'F')
{
	//conversion to fehren
	if(choice == 'F' || choice == 'f'){
		return float((9/5)*temp + 32);
	}

    //conversion to celcius
	else if(choice == 'C' || choice == 'c'){
		return float((temp - 32)*(5/9));
	}
    
    //throw excepction
	else throw "Invalid Choice !!!";

}

int main()
{
	char choice;
	float temp;

	cout<<"Enter Your Temperature :";
	cin>>temp;

	cout<<"Choose Conversion Scale<F for Fahrenheit , C for Celsius> :";
    cin>>choice;


    //using try catch block 
    try{
    	cout<<"Converted Temperature is : "<<convert_temp(temp,choice)<<"\n";
    }catch(const char *msg){
    	//show the error msg
    	cout<<msg<<"\n";

    }


	return 0;
}