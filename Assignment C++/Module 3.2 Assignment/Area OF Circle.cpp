#include<iostream>

using namespace std;

class circle
{
	public:
		int area;
		
		void area_of_circle(int area)
		{
			cout<<3.24*area*area<<endl;
		}
		
		void area_of_circle(float area)
		{
			cout<<3.24*area*area<<endl;
		}
		
		void area_of_circle(double area)
		{
			cout<<3.24*area*area<<endl;
		}
};

main()
{
	circle p3;
	p3.area_of_circle(10);
	p3.area_of_circle(12.50);
	p3.area_of_circle(10.2346);
}
