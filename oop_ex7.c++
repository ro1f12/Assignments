//@rofi
/**
       shape
____________________
         |
         |
      polygon
___________________
|		   |
|		   |
rectangle	triangle
   |
   |
 square
 
**/
#include<iostream>
using namespace std;

class shape
{
public:
	shape(){}
	void say()
	{
		cout<<"This is shape"<<endl;
	}
};

class polygon : public shape
{
public:
	polygon(){}
	void say()
	{
		cout<<"polygon is a shape"<<endl;
	}
};

class rectangle : public polygon 
{
public:
	rectangle(){}
	void say()
	{
		cout<<"rectangle is a polygon"<<endl;
	}
};

class triangle : public polygon 
{
public:
	triangle(){}
	void say()
	{
		cout<<"triangle is a polygon"<<endl;
	}
};

class square : public rectangle 
{
public:
	square(){}
	void say()
	{
		cout<<"square is a rectangle"<<endl;
	}
};


int main()
{
	shape sh;
	sh.say();


	polygon p;
	p.say();

	rectangle r;
	r.say();

	triangle t;
	t.say();

	square s;
	s.say();
	return 0;
}



