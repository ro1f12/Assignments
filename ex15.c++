//@rofi
/**
15. Write a program to display the result of sine series using function.
*/
#include <iostream>
#include<cmath>

using namespace std;

/*we will use our own namespace as sin() function exists*/
namespace ns{
	float sin(float x);
}


//defining our own sin function
float ns::sin(float x)
{
	//convert the input to radian
	 x = x * (M_PI/180.00);
    

     //set initial term & desired accuracy 
    float t = x, accuracy = 0.0001;


    //actual value using the library function
    float val = std::sin(x); 


    //sinx is the sum of the series
    float sinx = x;
	 

    int i = 1;
    do
    {
    	//calulating the term
        float d = 2 * i * (2 * i + 1);
        t = -t * x * x / d;

        //sum of the series
        sinx = sinx + t;
        i = i + 1;

        //if desired accuracy is achived return result
    }while (accuracy <= fabs(val - sinx));

    
    return sinx;
}
	



int main(int argc, char const *argv[])
{
	/* code */
	float degree;

	cout<<"Input to calculate sine value: ";
	cin>>degree;


	//our function result
	cout<<"Our result:"<<ns::sin(degree);

	cout<<"\nLibrary function result: "<<sin(degree)<<"\n";
	return 0;
}