/**
2018-10-20 22:15:24 
rofi
*/

/*
8. Write  a  program to n values of sales and then calculate the commission on sales amount where the commission is calculated as follows:
a. If sales <= Rs.500, commission is 5%.
b. If sales  > 500 but <= 2000, commission is Rs 35 plus 10% above Rs 500.
c. If sales  > 2000 but <= 5000,commission is Rs 185 plus 12% above Rs.2000.
d. If sales  > 5000 ,commission is 12.5%.
*/
#include<iostream>
using namespace std;

/*function to calculate commision*/
float getcommision(float price)
{
	if(price <= 500){
		//condition a
		return float(0.05*price);
	}

	else if(price>500 && price<=2000){
		//condition b
		return float(35 + (price - 500)*0.10);
	}

	else if(price>2000 && price<=5000){
		//condition c
		return float(185 + (price - 2000)*0.12);
	}

	else if(price>5000){
		//condition d
		return float(price*0.125);
	}

}

int main(int argc, char const *argv[])
{
	float sales[100], commission=0.0;
	int n;

	cout<<"How many sales:";
	cin>>n;


	//read the sales and also count commision and sum 
	for(int i=0; i<n; i++){
		cout<<"\nInput "<<i+1<<"th sale amount: ";
		cin>>sales[i];


		//calculate commision 
		float single_commission = getcommision(sales[i]);


		//add to total commision
		commission += single_commission;
	}


	//Display total comission
	cout<<"\nThe total commission is: Rs."<<float(commission)<<"/- only.\n";
	return 0;
}
