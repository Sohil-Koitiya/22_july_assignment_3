#include<iostream>

using namespace std;

class person
{
	public:
		string name;
		int age;
		
		void person_inputdata()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter age : ";
			cin>>age;
		}
		
		void person_displaydata()
		{
			cout<<"Name is : "<<name<<endl;
			cout<<"Age is : "<<age<<endl;
		}
};

class student
{
	public:
		float percentage;
		
		void student_inputdata()
		{
			cout<<"Enter Student Percentage : ";
			cin>>percentage;
		}
		
		void student_displaydata()
		{
			cout<<"Sudent Percentage is : "<<percentage<<endl;
		}
};

class teacher : public person, public student
{
	public:
		int salary;
		
		void teacher_inputdata()
		{
			cout<<"Enter Teacher Salary : ";
			cin>>salary;
		}
		
		void teacher_displaydata()
		{
			cout<<"Teacher Salary is : "<<salary<<endl;
		}
};

main()
{
	teacher s2;
	s2.person_inputdata();
	s2.student_inputdata();
	s2.teacher_inputdata();
	s2.person_displaydata();
	s2.student_displaydata();
	s2.teacher_displaydata();
}
