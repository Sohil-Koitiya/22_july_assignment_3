#include<iostream>

using namespace std;

class additionoverloading
{
	public:
		int a,b,c;
		
		void add(int a, int b)
		{
			cout<<a+b<<endl;
		}
		
		void add(int a, int b, int c)
		{
			cout<<a+b+c<<endl;
		}
		
		void add(float a, float b, float c)
		{
			cout<<a+b+c<<endl;
		}
		
};

main()
{
	additionoverloading obj;
	obj.add(10,20);
	obj.add(10,5,5);
	obj.add(15.5f,10.5f);
}
