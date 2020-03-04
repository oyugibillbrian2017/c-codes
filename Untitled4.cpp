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

}
else
{
amounttopay=Total-d;
}
cout<<setw(15)<<"product Name"<<setw(15)<<"Unit Price"<<setw(15)<<"qty"<<setw(15)<<"Total"<<endl;
cout<<setw(15)<<item1<<setw(15)<<p1<<setw(15)<<(qty1*p1)<<endl;
cout<<setw(15)<<item2<<setw(15)<<p2<<setw(15)<<(qty2*p2)<<endl;
cout<<setw(15)<<item1<<setw(15)<<p3<<setw(15)<<(qty3*p3)<<endl;
cout<<setw(15)<<"Total";
<<setw(15)<<""<<setw(15)<<""<<setw(15)<<(p1*qty1)+(p2*qty2+(p3*qty3)<<endl;
cout<<setw(15)<<"amounttopay"<<setw(15)<<""<<setw(15)<<""<<setw(15)<<amounttopay<<endl;

return 0;
}
