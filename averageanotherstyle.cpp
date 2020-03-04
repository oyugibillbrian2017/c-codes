//aprogram witha function which compute the average mark of a student test1 and test 2
#include<iostream>
using namespace std;
float avg(float test1,float test2);
float avg(float test1,float test2)
{
	float avg;
	avg=test1+test2;
	return avg;
};
int main()
{
	float a,b,c;
	cout<<"please enter test1 ";
	cin>>a;
	cout<<"please enter test 2";
     cin>>b;
	c=avg(a,b)/2;// function call
	cout<<"the avg is"<<c;
	return 0;
}
