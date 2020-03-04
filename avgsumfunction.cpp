//aprogram with a function
#include<iostream>
using namespace std;
void sum();
void average();
void sum()
{
	int a,b,sum;
	cout<<"please enter any two integer";
	cin>>a>>b;
	sum=a+b;
	cout<<"The sum is "<<sum;
};
void average()
{
	float x,y,average;
	cout<<"please enter any two numbers";
	cin>>x>>y;
	average=(x+y)/2;
	cout<<average;
};
int main()
{
	sum();
	average();
	return 0;
}
