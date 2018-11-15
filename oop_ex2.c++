//@rofi/15-11-18
//2. WAP to overload a function to swap int, float and string types

#include<iostream>
using namespace std;


void swap(int *a, int *b)
{
      int temp = *a;
      *a = *b;
      *b = temp;
}

void swap(float *a, float *b)
{
      float temp = *a;
      *a = *b;
      *b = temp;
}


void swap(char **s1, char **s2)
{
      char *temp = *s1;
      *s1 = *s2;
      *s2 = temp;
}


void swap(char *s1, char *s2)
{
      char temp = *s1;
      *s1 = *s2;
      *s2 = temp;
}


int main()
{
       int a=10;
       int b= 20;
       cout<<"before: "<<a<<","<<b<<endl;
       swap(&a,&b);
       cout<<"after: "<<a<<","<<b<<endl;
       
       float c=10.5;
       float d=20.7;
       cout<<"before: "<<c<<","<<d<<endl;
       swap(&c,&d);
       cout<<"after: "<<c<<" "<<d<<endl;
      
      	
       char *s1="hello";
       char *s2=" World";
       cout<<"before: "<<s1<<", "<<s2<<endl;
       swap(&s1,&s2);
       cout<<"after: "<<s1<<","<<s2<<endl;
             char c1='a';
       char c2='b';
       cout<<"before: "<<c1<<", "<<c2<<endl;
       swap(&c1,&c2);
       cout<<"after: "<<c1<<","<<c2<<endl;

    
       return 0;
}
