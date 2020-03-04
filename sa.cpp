//
#include<iostream>
using namespace std;
void sum();
void average();
void sum()
{
	int a,b,sum;
	cout<<"please enter two integers";
	cin>>a>>b;
	sum=a+b;
	cout<<sum;
};
void average()
{
	float c,d,average;
	cout<<"please enter two numbers";
	cin>>c>>d;
	average=(c+d)/2;
	cout<<average;
};
int main()
{
	sum();
	average();
	return 0;
}
