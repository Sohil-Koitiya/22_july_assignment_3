#include<iostream>

using namespace std;

class subtractionoverloading
{
	public:
		int a,b,c;
		
		void sub(int a, int b)
		{
			cout<<a-b<<endl;
		}
		
		void sub(int a, int b, int c)
		{
			cout<<a-b-c<<endl;
		}
		
		void sub(double a, double b, double c)
		{
			cout<<a-b-c<<endl;
		}
};

main()
{
	subtractionoverloading obj1;
	obj1.sub(15,10);
	obj1.sub(25,5,5);
	obj1.sub(50.25,10.15,5.20);
}
