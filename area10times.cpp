//program that displays the area of arectangle10 times
#include<iostream>
using namespace std;
using std::endl;
main()
{
	float l,w,a;
	for(int a=1;a<=10;a++)
	{
		cout<<"please enter the leghth and width of the rectangle"<<endl;
		cin>>l,w;
		a=l*w;
		cout<<"the area is"<<a;
	}
	return 0;
}
