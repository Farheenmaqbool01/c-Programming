// programm to check whether a yearis leap year or not using conditional operators.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year";
	cin>> year;
   cout<<	((year%4==0 && year%100!=0)? "leapyear":(year%400==0)?"leap year":"commonyear");
	
}
