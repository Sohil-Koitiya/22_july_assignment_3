#include<iostream>

using namespace std;

class student
{
	public:
		int rollnumber;
		
		int rollnumber1()
		{
			cout<<"Enter Roll Number : ";
			cin>>rollnumber;
		}
};

class test : public student
{
	public:
		int maths;
		int english;
		
		int subjectmarks()
		{
			cout<<"Enter Marks of Maths : ";
			cin>>maths;
			cout<<"Enter Marks of English : ";
			cin>>english;
		}
		
};

class result : public test
{
	public:
		int totalmarks()
		{
			cout<<"Total Marks is : "<<maths+english<<endl;
			cout<<"Roll Number is : "<<rollnumber<<endl; 
		}
		
};

main()
{
	result p1;
	p1.rollnumber1();
	p1.subjectmarks();
	p1.totalmarks();
}


