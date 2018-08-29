/**
@rofi
*/

/*Perfect Number Check*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, sum=0;
	cout<<"Input a number to check if perfect:";
	cin>>n;

	for(int i=1; i<=n/2; i++){
		//check if divisor
		if(n%i == 0){
			sum +=i;
		}
	}


	//condition for perfect number
	if(n == sum){
		cout<<n<<" is a perfect number \n";
	}else{
		cout<<n<<" is not a perfect number \n";
	}
	return 0;
}