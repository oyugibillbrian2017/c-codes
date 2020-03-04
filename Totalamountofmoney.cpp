//The program which computes the total amount of money to be paid by customer after recieving the unit cost and 3 product from the user
#include<iostream>
using namespace std;
main()
{
	int a;
	int b;
	int c;
	int Total;
	cout<<"please enter tha amount of thefirst product";
	cin>>a;
	cout<<"please enter the amount ofthe second product";
	cin>>b;
	cout<<"please enter the third product";
	cin>>c;
	Total =(a+b+c);
	cout<<"The Total amount of money is "<<Total;
	return 0;
}
