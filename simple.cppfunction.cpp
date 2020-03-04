//
#include<iostream>
using namespace std;
void simpleinterest();
void simpleinterest()
{
	float p,r,t,simpleinterest;
	cout<<"enter the principle amount";
	cin>>p;
	cout<<"enter the rate";
	cin>>r;
	cout<<"enter the time";
	cin>>t;
	simpleinterest=(p*r*t)/100;
	cout<<"The simple interest is"<<simpleinterest;
};
int main()
{
	simpleinterest();
	return 0;
}
