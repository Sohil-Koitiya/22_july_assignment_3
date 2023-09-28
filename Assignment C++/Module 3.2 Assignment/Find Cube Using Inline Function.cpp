#include<iostream>

using namespace std;

inline int cube(int s)
{
	int result = s*s*s;
	
	return result;
}

main()
{
	int s = 5;
	cout<<"The cube of s is = "<<cube(s);
}
