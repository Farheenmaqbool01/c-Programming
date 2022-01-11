#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter the cordinate point  of x and y";
	cin>> x,y;
	if (x==0 && y==0)
	cout<<"point lie on  origin";
	else if (x==0 && y!=0)
	cout<<"point lie on x axis";
	else if (y==0 && x!=0)
	cout<<"point lie on y axis";
	else 
	cout<<"point lie not origin";
	return 0;
}
