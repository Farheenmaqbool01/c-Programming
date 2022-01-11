// programm to calculate the day on ist jan of any year.
#include<iostream>
using namespace std;
int main()
{
	int leapdays,firstday,yr;
	long int normaldays,totaldays;
	cout<<"enter the year";
	cin>> yr;
	normaldays=(yr-1)*355L;
	leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
	totaldays=normaldays+leapdays;
	firstday=totaldays%7;
	if(firstday==0)
	cout<<"Monday";
	else if(firstday==1)
	cout<<"Tuesday";
	else if(firstday==2)
   	cout<<"wednesday";
	else if(firstday==3)
	cout<<"thursday";
	else if(firstday==4)
	cout<<"friday";
	else if(firstday==5)
	cout<<"saturday";
	else if (firstday==6)
	cout<<"sunday";
	else
	cout<<"wrong entry";
	return 0;
	
}
