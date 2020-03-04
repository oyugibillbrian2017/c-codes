//aprogram with a function
#include<iostream>
using namespace std;
void sum();

void sum()
{
	int a,b,sum;
	cout<<"please enter two integer";
	cin>>a>>b;
	sum=a+b;
	cout<<"The sum is "<<sum;
};
int main()
{
	sum();
	return 0;
}
