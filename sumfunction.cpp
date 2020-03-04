//aprogram with a function
#include<iostream>
using namespace std;
void area();

void area()
{
	int l,w,area;
	cout<<"please enter the length and the width of a rectangle";
	cin>>l>>w;
	area=l*w;
	cout<<"The arae is "<<area;
};
int main()
{
	area();
	return 0;
}
