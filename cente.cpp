// a program with the switch statement 
#include<iostream>
using namespace std;
 int main()
{
	int c;
	cout<<"The program which convert shillings and dollars"<<endl;
	cout<<"press 1 to covert shilling into dollar";
	cout<<"press 2 to convert dollar into shilling";
	cin>>c;
	switch(c)
	{
		case 1: float shilling, dollar,exchange;
		cout<<"enter the dollar amount";
		
		cin>>dollar;
		cout<<"enter the exchange";
		cin>>exchange;
		shilling=dollar*exchange;
		cout<<"the shilling equivalent is"<<shilling;
		break;
			case 2: float shil,dolla,ex;
		cout<<"enter the shil amount";
		
		cin>>shil;
		cout<<"enter the exchange";
		cin>>ex;
		dolla=shil/ex;
		cout<<"the shilling equivalent is"<<dolla;
		break;
		default:cout<<"wrong choice";
		
	}
	return 0;
}
