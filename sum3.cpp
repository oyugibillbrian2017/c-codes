//aprogram which computes and display the sum of three nummbers entered by the user
#include<iostream>
using namespace std;
 int main()
{
	int firstno;
	int secondno;
	int thirdno;
	int sum;
	cout<<"please enter the first integer";
	cin>>firstno;
	cout<<"please enter the second integer";
	cin>>secondno;
	cout<<"please enter the third integer";
	cin>>thirdno;
	sum=(firstno+secondno+thirdno);
	cout<<"The sum of three numbers is "<<sum;
	return 0;
	
}
