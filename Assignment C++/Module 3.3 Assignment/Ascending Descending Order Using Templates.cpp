#include<iostream>

using namespace std;

int ass_dec();

main()
{
	ass_dec();
	return 0;
}

int ass_dec()
{
	int arr1[5],arr2[5];
	int i,j,temp;
	
	for (i=0;i<5;i++)
	{
		cout<<"Enter Element of arr1 : ";
		cin>>arr1[i];
	}
	
	for (i=0;i<5;i++)
	{
		cout<<"Enter Element of arr2 : ";
		cin>>arr2[i];
	}
	
	int choice;
	cout<<"Enter Your Choice : ";
	cin>>choice;
	
	int ascending,decending;
	
	switch(choice)
	{
		case 1:
			{
				for (i=0;i<5;i++)
				{
					for (j=i+1;j<5;j++)
					{
						if (arr1[i] > arr1[j])
						{
							temp = arr1[i];
							arr1[i] = arr1[j];
							arr1[j] = temp;
						}
					}
				}
				cout<<"\nAscending = ";
				
				for (i=0;i<5;i++)
				{
					cout<<" "<<arr1[i]<<" ";
				}
				
				for (i=0;i<5;i++)
				{
					for (j=i+1;j<5;j++)
					{
						if (arr2[i] > arr2[j])
						{
							temp = arr2[i];
							arr2[i] = arr2[j];
							arr2[j] = temp;
						}
					}
				}
				cout<<"\nAscending = ";
				
				for (i=0;i<5;i++)
				{
					cout<<" "<<arr2[i]<<" ";
				}
				
			}
			break;
			
		case 2:
				{
					for (i=0;i<5;i++)
					{
						for (j=0;j<5;j++)
						{
							if (arr1[i] > arr1[j])
							{
								temp = arr1[i];
								arr1[i] = arr1[j];
								arr1[j] = temp;
							}
						}
					}
					cout<<"\nDecending = ";
				
					for (i=0;i<5;i++)
					{
						cout<<" "<<arr1[i]<<" ";
					}
				
					for (i=0;i<5;i++)
					{
						for (j=0;j<5;j++)
						{
							if (arr2[i] > arr2[j])
							{
								temp = arr2[i];
								arr2[i] = arr2[j];
								arr2[j] = temp;
							}
						}
					}
					cout<<"\nDecending = ";
				
					for (i=0;i<5;i++)
					{
						cout<<" "<<arr2[i]<<" ";
					}
				
				}	
	}
	
}
