#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x1,y1,x2,y2,r;
	float ds;
	cout<<"enter the cordinate of x1 and y1 of a center of circle";
	cin>> x1,y1;
	cout<<"enter the point cordinate of x2 and y2  of circle";
	cin>> x2,y2;
	cout<<"enter the radius";
	cin>> r;
	   ds=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	   if(ds>r)
	  {
	cout<<" outside the circle";
}
     else
     {
	cout<<" inside the circle";
}
	
}
