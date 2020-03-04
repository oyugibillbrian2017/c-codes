//aprogram with a function which computes and displays the area of the rectangle
#include<iostream>
using namespace std;
void area();
void sum();
void area()
{
	int l,w,area;
	cout<<"please enter the length and the width of a rectangle";
	cin>>l>>w;
	area=l*w;
	cout<<"The araea of the rectangle is "<<area;
};
void sum()
{
	float a,b,c,sum;
	cout<<"please enter three integers";
	cin>>a>>b>>c;
	sum=a+b+c;
	cout<<"The sum is "<<sum;
};
int main()
{
	area();
    sum();
	
	return 0;
}
