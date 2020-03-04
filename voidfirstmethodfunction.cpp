//aprogram witha function which compute the average mark of a student test1 and test 2
#include<iostream>
using namespace std;
void average();
void average()
{
	float test1;
	float test2;
	float average;
	cout <<"program displays the average of two test"<<endl;
	cout<<"please enter test 1 ";
	cin>>test1;
	cout<<"please enter test 2";
	cin>>test2;
	average=(test1+test2)/2;
	cout<<average;
};
int main()
{

	average();
	return 0;
}
