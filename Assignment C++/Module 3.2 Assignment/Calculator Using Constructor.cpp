#include<iostream>

using namespace std;

class calc
{
	public:
		calc(int x, int y)
		{
			cout<<"Addition of "<<x<<" and "<<y<<" is "<<x+y<<endl;
			cout<<"Subtraction of "<<x<<" and "<<y<<" is "<<x-y<<endl;
			cout<<"Multiplication of "<<x<<" and "<<y<<" is "<<x*y<<endl;
			cout<<"Division of "<<x<<" and "<<y<<" is "<<x/y<<endl;
		}
};

main()
{
	calc sub = calc(20,10);
}
