//aprogram with a function
#include<iostream>
using namespace std;
void Hello();
void area();
void Byebye();
void area()
{
	int l,w,area;
	cout<<"please enter the length and the width of a rectangle";
	cin>>l>>w;
	area=l*w;
	cout<<"The arae is "<<area;
};
void Hello()
{
	cout<<"Hello";
};
void Bye()
{
	cout<<"Bye";
};
int main()
{
	area();
	Hello();
	Bye();
	Bye();
	return 0;
}
