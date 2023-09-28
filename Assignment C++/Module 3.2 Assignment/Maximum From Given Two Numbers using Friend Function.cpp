#include<iostream>

using namespace std;

class maximum
{
	private:
		int a;
		
	public:
		int b;
		
	friend void fun();
};

void fun()
{
	maximum obj;
	
	obj.a;
	obj.b;
	
	cout<<"Enter Value of A = ";
	cin>>obj.a;
	cout<<"Enter Value of B = ";
	cin>>obj.b;
	
	if (obj.a > obj.b)
	{
		cout<<"Maximun Numbers is "<<obj.a<<endl;
	}
	else
	{
		cout<<"Maximum Number is "<<obj.b<<endl;
	}
}

main()
{
	fun();
}
