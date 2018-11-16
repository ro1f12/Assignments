//@rofi
//ex4 
#include<iostream>
using namespace std;
class Mammals
{
 public:
     Mammals()
     {
       cout<<"I am mammal"<<endl;
      }	

};


class Marine
{
  public:
      
     Marine()
     {
       cout<<"I am a marine animal"<<endl;
      }

};


class BlueWhale: public Mammals, public Marine
{
public:
      BlueWhale()
      {
      
       cout<<"I belong to both categories: Mammals as well as Marine animals"<<endl;
      }
};


int main()
{
//Mammals mammal;
//Marine marine;
BlueWhale whale ;
return 0;
}
