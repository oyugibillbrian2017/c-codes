//the program converts from dollar to shilling and shilling to dollar
#include<iostream>
using namespace std;
main()
{
	int c;
	cout<<"The program converts shillings to dollars and also converts dollars into shilling"<<endl;
	cout<<"press 1 to covert shillings into dollars"<<endl;
	cout<<"press 2 to convert dollars into shilling"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:float shilling,dollars,exchangerate;
		cout<<"Enter the dolloa rate";
		cin>>dollars;
		cout<<"Enter the exchangerate";
		cin>>exchangerate;
		shilling=dollars*exchangerate;
		cout<<"Shillings is equvallent to "<<shilling;
		break;
		case 2:float dol,shill,exchang;
		cout<<"Enter the shilling amount";
		cin>>shill;
		cout<<"Enter exchangerate";
		cin>>exchang;
		dol=shill/exchang;
		cout<<"dollar equivalent is"<<dol;
		break;
		default:cout<<"stupid";
	}
	return 0;
}
