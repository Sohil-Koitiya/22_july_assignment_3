#include<iostream>

using namespace std;

class cricketer
{
	public:
		int total_runs;
		float average_runs;
		string best_performance;
};

class batsman : public cricketer
{
	public:
		void inputdata()
		{
			cout<<"Enter Total Run : ";
			cin>>total_runs;
			cout<<"Enter Total Member : ";
			cin>>average_runs;
			cout<<"Enter Best Performer : ";
			cin>>best_performance;
		}
		
		void displaydata()
		{
			cout<<"Total Run is = "<<total_runs<<endl;
			cout<<"Average Run is = "<<total_runs/average_runs<<endl;
			cout<<"Best Performer is = "<<best_performance;
		}
			
};

main()
{
	batsman s3;
	s3.inputdata();
	s3.displaydata();
}
