#include<iostream>

using namespace std;

class calc
{
	public:
		int a,b;
		
		void inputdata()
		{
			cout<<"Enter Value of a : ";
			cin>>a;
			cout<<"Enter Value of b : ";
			cin>>b;
			cout<<"\n";	
		}
		
		void displaydata()
		{
			cout<<"Addition of "<<a<<" and "<<b<<" = "<<a+b;
			cout<<"\n";
			cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<a-b;
			cout<<"\n";
			cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<a*b;
			cout<<"\n";
			cout<<"Division of "<<a<<" and "<<b<<" = "<<a/b;
			cout<<"\n";
			cout<<"Modulo of "<<a<<" and "<<b<<" = "<<a%b;
		}
};

main()
{
	calc obj;
	obj.inputdata();
	obj.displaydata();	
}
