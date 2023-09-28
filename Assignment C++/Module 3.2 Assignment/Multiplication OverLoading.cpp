#include<iostream>

using namespace std;

class multiplicationoverloading
{
	public:
	int a,b,c;
	
	void mult(int a, int b)
	{
		cout<<a*b<<endl;
	}
	
	void mult(int a, int b, int c)
	{
		cout<<a*b*c<<endl;
	}
	
	void mult(double a, double b, double c)
	{
		cout<<a*b*c<<endl;
	}
};

main()
{
	multiplicationoverloading s4;
	s4.mult(5,5);
	s4.mult(5,1,2);
	s4.mult(5.1,1.25,2.15);
}
