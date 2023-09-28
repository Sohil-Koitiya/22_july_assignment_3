#include<iostream>

using namespace std;

class divisionoverloading
{
	public:
		int a,b,c;
		
		void div(int a, int b)
		{
			cout<<a/b<<endl;
		}
		
		void div(int a, int b, int c)
		{
			cout<<a/b/c<<endl;
		}
};

main()
{
	divisionoverloading s2;
	s2.div(100,50);
	s2.div(100,2,2);
}
