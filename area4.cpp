//a program which compute and displays the area of a circle
#ninclude<iostream>
using namespace std;
int main()
{
	float pi;
	float r;
	float a;
	cout<<"please enter radius";
	cin>>r;
	cout<<"please enter pi";
	cin>>pi;
	a=pi*r*r;
	cout<<a;
	return 0;
}
