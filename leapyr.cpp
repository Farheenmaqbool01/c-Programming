#include<iostream>
using namespace std;
int main()
{
	int yr;
   cout<<"enter the year";
	cin>>yr;
	if(yr%100==0)
	{
		if(yr%400==0)
	cout<<"leap year";
   else
	cout<<"not leap year";
}
   else
   if(yr%4==0)
   cout<<"leap year";
   else
   cout<<"not leap year";

}
