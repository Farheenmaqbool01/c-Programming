// leap year using logical operators.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year";
	cin>> year;
	if (year%4==0 && year%400)
	cout<<"leap year";
	else
	cout<<"not leap year";
}
