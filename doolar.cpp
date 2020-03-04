//a program which computes the simple interest which will be earned by the bank after accepting the principle,rate and time
#include <iostream>
using namespace std;
int main()
{
string item1,item2,item3;

float qty1,qty2,qty3;
int p1,p2,p3;
float Total;
cout<<"please enter the names of three items required by the customers";
cin>>item1>>item2>>item3;
cout<<"please enter the qty of each product respecttiveley";
cin>>qty1>>qty2>>qty3;
cout<<"Enter the unit prices of the items respectively";
cin>>p1,p2,p3;
Total=(p1*qty1)+(p2*qty2)+(p3*qty3);


if(Total>100000)
{
	float d;
	float amounttopay;
	d=(10/100)*Total;
	amounttopay=Total-d;
	cout<<"please pay"<<amounttopay;
}
else
{
	cout<<"plaese pay"<<Total;
}
return 0;
}
