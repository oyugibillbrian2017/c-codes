//a program which computes the simple interest which will be earned by the bank after accepting the principle,rate and time
#include <iostream>
using namespace std;
int main()
{
float p,r,t,si;

	cout<<"please enter principle";
	cin>>p;
	cout<<"please enter rate";
	cin>>r;
	cout<<"please enter time";
	cin>>t;
	si=(p*r*t)/100;
	cout<<si;
	return 0;	
}

