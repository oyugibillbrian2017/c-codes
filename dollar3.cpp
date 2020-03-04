// a program with the switch statement 
#include<iostream>
using namespace std;
 int main()
{
	int c;
cout<<" This program allows the user to say hello or Bye Bye";
	cout<<" Press 1  if you want to convert dollars to shillings"<<endl;
	cout<<" press 2 if you want to convert shillings to dollars "<<endl;
	
	cin>>c;
	switch(c)
	{
	case 1: float dollar,shilling,exchangerate;
	       cout<<"please enter the dollar amount";
	       cin>>dollar;
	       cout<<"please enter the exchangerate";
	       cin>>exchangerate;
	       shilling=dollar*exchangerate;
	       cout<<"The shilling equvallent is"<<shilling;
	        
                  break;
	 case 2: float dol,shill,exrate;
	       cout<<"please give the shilling amount and the exchangerate";
	       cin>>shill>>exrate;
	       cout<<"please enter the exchangerate";
	       cin>>exrate;
	       dollar=shill/exrate;
	       cout<<"The dollar equvallent is"<<dol;
	        
	      break;
	    
	    default: cout<<"wrong choice";
	}
	return 0;
}

