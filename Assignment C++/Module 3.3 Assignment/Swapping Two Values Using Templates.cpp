#include<iostream>

using namespace std;

template <class s>

void swapping (s &a, s &b)
{
	s temp = a;
	a=b;
	b=temp;
}

main()
{
	char a = 'A', b = 'B';
	int x = 10, y = 20;
	
	cout<<"Before swap a = "<<a<<"	| b = "<<b<<endl;
	swapping (a,b);
	cout<<"After swap a = "<<a<<"	 | b = "<<b<<endl;
	
	cout<<"Before swap x = "<<x<<"	| y = "<<y<<endl;
	swapping (x,y);
	cout<<"After swap x = "<<x<<"	 | y = "<<y<<endl;
}

