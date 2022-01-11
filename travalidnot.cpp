#include<iostream>
using namespace std;
int main()
{
	int angle1,angle2,angle3,sum;
	cout<<"enter the three angles of a traingle";
	cin>>angle1,angle2,angle3;
	sum=angle1+angle2+angle3;
	if (sum==180)
	{
	cout<<"traingle is valid";
}
	else
	{
	cout<<"traingle not valid";
}
	
}
