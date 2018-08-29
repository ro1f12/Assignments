/**
@rofi
*/

/*Inputing positive numbers and separtly displaying as odd and even*/
#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int num, even[10], odd[10], c_1=0 ,c_2=0;


	cout<<"Input Positive Integers<to stop input -1>:";

	//read numbers
	while(1){
		cin>>num;
		if(num == -1)
			break;
	    else{
	      	//if even add to even array
	    	if(num%2 == 0){
	    		even[c_1++] = num;
	    	}else{
	    		odd[c_2++] = num;
	    	}
	    }
	}


	//Display the Odd-Even separetly
	cout<<"Total "<<c_1<<" Even numbers & "<<c_2<<" Odd numbers Are Inputed.\n";

	cout<<"Even Numbers : ";
	for(int i=0; i<c_1; i++){
		cout<<even[i]<<" ";
	}

	cout<<"\nOdd Numbers : ";
	for(int j=0; j<c_2; j++){
		cout<<odd[j]<<" ";
	}
    cout<<"\n";
	return 0;
}
