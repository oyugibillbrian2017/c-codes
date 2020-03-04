//A program that computes the area of a rectangle after accepting the length nd width from the user
#include<iostream>
using namespace std;
int main()
{
	int length;
	int width;
	int area;
	cout<<"please enter the length";
	cin>>length;
	cout<<"please enter the width";
	cin>>width;
	area=length * width;
	cout<< "the area is "<<area;
	return 0;
}
