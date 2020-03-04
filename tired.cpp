//
#include<iostream>
using namespace std;
main()
{
	char sum;
	sum='N';
	while(sum=='N')
	{
		int a,b,sum;
		cout<<"enter integers";
		cin>>a>>b;
		sum=a+b;
		cout<<sum;
		cout<<"are you tired?(N/Y)";
		cin>>sum;
	}
	return 0;
}
