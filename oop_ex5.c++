//@rofi
#include<iostream>
using namespace std;

class Vehicle{
   int engNum;
   int regNum;

public:
	Vehicle(){}
	//setter 
	void setData()
	{
		cout<<"Input engine number:";
		cin>>engNum;
		cout<<"Input registration number:";
		cin>>regNum;
	}
    
    //getter 
	void getData()
	{
		cout<<"engine number: "<<engNum<<endl;
		cout<<"registration number: "<<regNum<<endl;
	}
};


class Truck: public Vehicle
{
	int capacity;
public:
	Truck(){}

	void setData()
	{
		cout<<"Input Truck details:";
		Vehicle::setData();
		cout<<"Input carrying capacity<in kgs>:";
		cin>>capacity;
	}

	void getData()
	{

		Vehicle::getData();
		cout<<"capacity:"<<capacity<<"kgs"<<endl;
	}
};


class Bus: public Vehicle
{
	int no_of_seats;
public:
	Bus(){}

	void setData()
	{
		cout<<"Input Bus details:";
		Vehicle::setData();
		cout<<"Input seat capacity:";
		cin>>no_of_seats;
	}

	void getData()
	{
		Vehicle::getData();
		cout<<"seat capacity:"<<no_of_seats<<endl;
	}
};

int main()
{
	cout<<"Truck instance creating:\n";
	Truck truck1;
	truck1.setData();
	cout<<"***details of the truck***\n";
	truck1.getData();

    cout<<"Bus instance creating:\n";
	Bus bus1;
	bus1.setData();
	cout<<"***details of the bus***\n";
	bus1.getData();
	return 0;
}
