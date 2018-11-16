
//ex6
#include<iostream>
#include<string>
using namespace std;

class Employee
{
	int e_id;
	string e_name;
	
	public: void get_empData()
	{
		cout<<"Enter employee name: "<<endl;
		cin>>e_name;
		cout<<"Enter employee id: "<<endl;
		cin>>e_id;
	}
	void disp_empData()
	{
		cout<<"Employee Name: "<<e_name<<endl;
		cout<<"Employee ID: "<<e_id<<endl;
	}
};

class Department: public virtual Employee
{
	int dno;
	string dep_name;
	
	public: void get_depData()
	{
		cout<<"Enter department name: "<<endl;
		cin>>dep_name;
		cout<<"Enter department no. : "<<endl;
		cin>>dno;
	}
	void disp_depData()
	{
		cout<<"Department Name: "<<dep_name<<endl;
		cout<<"Department ID: "<<dno<<endl;
	}
};

class Salary: public virtual Employee
{
	int m_sal;
		public: void get_salData()
	{
		cout<<"Enter monthly salary: "<<endl;
		cin>>m_sal;
	}
	void disp_salData()
	{
		cout<<"Monthly Salary: "<<m_sal<<endl;
	}
};

class Course_taught: public Department, public Salary
{
	string course_name;
	int course_id;

	public: void get_courseData()
	{
		cout<<"Enter Course taught: "<<endl;
		cin>>course_name;
		cout<<"Enter Course id: "<<endl;
		cin>>course_id;
	}
	void disp_courseData()
	{
		cout<<"Course Taught: "<<course_name<<endl;
		cout<<"Course ID: "<<course_id<<endl;
	}	
};

int main()
{
	Course_taught c;
	c.get_empData();
	c.get_depData();
	c.get_salData();
	c.get_courseData();
	
	cout<<endl<<endl<<"__________________Entered Details_________________"<<endl<<endl;
	
	c.disp_empData();
	c.disp_depData();
	c.disp_salData();
	c.disp_courseData();
	
	return 0;
}
