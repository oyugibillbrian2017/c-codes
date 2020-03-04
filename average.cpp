//The program which computes the average of three numbers entered by the user
#include<iostream>
using namespace std;
main()
{
	float a;
	float b;
	float c;
	float average;
	cout<<"please enter the first number";
	cin>>a;
	cout<<"please enter the second number";
	cin>>b;
	cout<<"please enter the third number";
	cin>>c;
	average=(a+b+c)/3;
	cout<<"The average of three numbers is" <<average;
	return 0;
}
