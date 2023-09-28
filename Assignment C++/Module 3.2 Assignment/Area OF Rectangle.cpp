#include<iostream>

using namespace std;

class rectangle
{
	public:
		float area;
		float breadth;
		
		void area_of_rectange(float area, float breadth)
		{
			cout<<area*breadth<<endl;
		}
		
		void area_of_rectangle(int area, int breadth)
		{
			cout<<area*breadth<<endl;
		}
		
		void area_of_rectangle(double area, double breadth)
		{
			cout<<area*breadth<<endl;
		}
};

main()
{
	rectangle p1;
	p1.area_of_rectange(20.2,22.1);
	p1.area_of_rectangle(25,15);
	p1.area_of_rectangle(10.4512,2.4578);
}
