//prints area and sum of two numbers
#include<iostream>
using namespace std;
main()
{
	int c;
	cout<<"The program which prints the area and sum of two numbers"<<endl;
	cout<<"press 1 for area"<<endl;
	cout<<"press 2 for sum"<<endl;
	cin>>c;
	switch(c)
	{
	case 1: int l,w,area;
	cout<<"please enter the length and width of rectangle";
	cin>>l>>w;
	area=l*w;
	cout<<area;
	break;
	case 2: float a,b,sum;
	cout<<"please enter any two integers"<<endl;
	cin>>a>>b;
	sum=a+b;
	cout<<sum;
	break;
	default: cout<<"wrong choice";	
	}
	return 0;
}
