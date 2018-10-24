//@rofi

/**
17. Write a program to read n numbers in a sorted array and insert 
a given element  in a  particular position
**/

#include<iostream>
using namespace std;


/**
@params: arr[] a sorted arry
         n number to be inserted
         pos position for insertion
*/
void insert_pos(int arr[], int value, int pos)
{
       //determinig the array size
       int n = sizeof(arr)/sizeof(arr[0]);

       if((pos >= n) || (pos < 0)){
       	//checking if position is in array bound
       	throw "Array out of bound exception...\n";
       }

       //now try to insert in the given position
       int i;
       for (i= pos-1; ( i >= 0  && arr[i] > value); i--){
            arr[i+1] = arr[i];
       }
 
 	   //insert the value at the position
       arr[i+1] = value; 
}


int main(int argc, char const *argv[])
{
	int arr[6] = {10,13,14,17,21,25};

	cout<<"Array before insertion: ";
	//see before insertion
	for(int i=0; i<6; i++){
		cout<<arr[i];
	}
	cout<<"\n";

	//insert 15 at 3 
	try{
	    insert_pos(arr, 15, 3);

	    cout<<"Array after insertion: ";
    	//see after insertion
	    for(int i=0; i<6; i++){
	    	cout<<arr[i];
	    }
	    cout<<"\n";
    }catch(const char *e){
    	//display the error msg
    	cout<<e;
    }
	
	return 0;
}