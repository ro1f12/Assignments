/**
@rofi
*/

/*min, max, sum, avg of n-numbers without using array*/
#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int count, input, sum, max , min , avg;

	cout<<"How Many Numbers:";
	cin>>count;
	cout<<"Input the numbers one by one";
	
	for(int i=0; i<count; i++){
		cout<<"\n Input "<<i+1<<"th Number: ";
		cin>>input;
  
   		//add to sum
   		sum +=input;

   		//if greater than the current  maximum change max 
		if(input>max){
			max = input;
		}


		//if less the current minimum change min
		if(input<min){
			min = input;
		}
	}


	//calculate average
	avg = float(sum/count);

	//Display the results
	cout<<"\n The Maximum is :"<<max
	    <<"\n The Minimum is :"<<min
	    <<"\n The Sum is     :"<<sum
	    <<"\n The Average is :"<<avg
	    <<"\n";
	return 0;
}
