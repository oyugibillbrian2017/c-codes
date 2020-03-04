//A program that computes and displays the sum of three numbers
#include<iostream>
using namespace std;
int main()
{
	int firstno;
	int secondno;
	int thirdno;
	int sum;
	cout<<"please enter the first number";
	cin>>firstno;
	cout<<"please enter the second number";
	cin>>secondno;
	cout<<"please enter the third number";
	cin>>thirdno;
	sum=firstno + secondno + thirdno;
	cout<<sum;
	return 0;
}
