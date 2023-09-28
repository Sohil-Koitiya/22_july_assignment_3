#include<iostream>

using namespace std;

class swapping
{
	private:
		int s;
		
	public:
		int p;
		
	friend void fun();
};

void fun()
{
	swapping a;
	
	a.s;
	a.p;
	
	cout<<"Enter Value of S = ";
	cin>>a.s;
	cout<<"Enter Value of P = ";
	cin>>a.p;
	
	a.s = a.s + a.p;
	a.p = a.s - a.p;
	a.s = a.s - a.p;
	
	cout<<"S = "<<a.s<<endl;
	cout<<"P = "<<a.p<<endl;
}

main()
{
	fun();
}
