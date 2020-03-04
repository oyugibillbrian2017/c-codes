//aprogram with the function
#include<iostream>
using namespace std;
float area(float l,float w);
float area(float l,float w)
{
	float a;
	a=l*w;
	return a;
};
int main()
{
	float a,b,c;
	cout<<"enter the length and width";
	cin>>a>>b>>c;
	c=area(a,b);// function call
	cout<<"the area is"<<c;
	return 0;
}
