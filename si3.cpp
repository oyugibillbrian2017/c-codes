//aprogram which computes and displays the simple interest
#include<iostream>
using namespace std;
int main ()
{
	float p;
	float r;
	float t;
	float simpleinterest;
	cout<<"please enter the principal amount";
	cin>>p;
	cout<<"please enter the rate of time";
	cin>>r;
	cout<<"please enter the time";
	cin>>t;
	simpleinterest=(p*r*t)/100;
	cout<<"The simple interest is "<<simpleinterest;
	return 0;
}
