/**
@rofi
*/

/*Driver Insurance*/
#include<iostream>
#include<cctype>
using namespace std;


bool is_insured( int age, char gender, char marital_status)
{
	return((marital_status == 'Y') || (marital_status == 'N' && gender == 'M' && age>30) || (marital_status == 'N' && gender == 'F' && age>25));
}

int main(int argc, char const *argv[])
{
	char gender, marital_status;
	int age;

	cout<<"Input Driver Details\n";
	cout<<"Age:";
	cin>>age;

	cout<<"Gender <M for male, F for female>:";
	cin>>gender;
	gender = islower(gender)? tolower(gender) : gender;

	cout<<"Marital status <Y yes, N no>:";
	cin>>marital_status;
	marital_status = islower(marital_status)? tolower(marital_status) : marital_status;


	if(is_insured(age, gender, marital_status) == true){
		cout<<"Driver is getting insured...\n";
	}else{
		cout<<"Driver is not getting insured...!!!\n";
	}
	return 0;
}
