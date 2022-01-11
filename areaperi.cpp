#include<iostream>
using namespace std;
int main()
{
	float l,b,area,perimeter;
	cout<<"enter the length and breadth  of rectangle";
	cin>> l,b;
	area=(l*b);
	perimeter =2*(l+b);
	if (area>perimeter)
	{
	cout<<"area of rectangle is greater ";
}
	else
	{
	cout<<"area of rectangle not greater";
}
}
