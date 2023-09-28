#include<iostream>

using namespace std;

class triangle
{
	public:
		int area;
		int breadth;
		
		void area_of_triangle(int area, int breadth)
		{
			cout<<(0.5*area*breadth)<<endl;
		}
		
		void area_of_triangle(float area, float breadth)
		{
			cout<<(0.5*area*breadth)<<endl;
		}
		
		void area_of_triangle(double area, double breadth)
		{
			cout<<(0.5*area*breadth)<<endl;
		}
};

main()
{
	triangle p2;
	p2.area_of_triangle(20,10);
	p2.area_of_triangle(10.2,5.24);
	p2.area_of_triangle(4.6512,3.14871);
}
