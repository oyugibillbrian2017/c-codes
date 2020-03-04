// a program which allows the user to say hello or bye bye.
#include<iostream>
using namespace std;
main()
{
	int c;
cout<<" This program allows the user to say hello or Bye Bye";
	cout<<" Press 1  for hello";
	cout<<" press 2 for Bye Bye ";
	
	cin>>c;
	switch(c)
	{
	case 1: cout<<"Hello";
	        
                  break;
	 case 2: 
          cout<<"Bye Bye";
         
	      break;
	    
	    default: cout<<"Stupid Idiot";
	}
	return 0;
}

