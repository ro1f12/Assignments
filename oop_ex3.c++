//@rofi/15-11-18
//3. WAP a function template to swap two data items of int, float and char type.


#include<iostream>
using namespace std;
template < typename T>
void swap_t(T& x,T& y)
{
     T temp = x;
     x=y;
     y=temp;
}

int main()
{
       int a=10;
       int b= 20;
       cout<<"before: "<<a<<","<<b<<endl;
       swap_t(a,b);
       cout<<"after: "<<a<<","<<b<<endl;

       float c=10.5;
       float d=20.7;
       cout<<"before: "<<c<<","<<d<<endl;
       swap_t(c,d);
       cout<<"after: "<<c<<" "<<d<<endl;


       char c1 ='a';
       char c2 ='b';
       cout<<"before: "<<c1<<", "<<c2<<endl;
       swap_t(c1,c2);
       cout<<"after: "<<c1<<","<<c2<<endl;
       return 0;
}
