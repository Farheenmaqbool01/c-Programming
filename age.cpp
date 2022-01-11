#include<iostream>
using namespace std;
int main()
{
	int age,ram,shyam,ajay;
	cout<<"enter the age of ram,shyam and ajay";
	cin>> ram,shyam,ajay;
	if (ram>ajay && ram>shyam)
	{
	cout<<" youngest is ram";
}
	if (shyam>ram && shyam>ajay)
	{
	cout<<"youngest is shyam.";
}
	else if(ajay<ram && ajay>shyam)
	{
	cout<<"youngest is ajay.";
}
	return 0;
	
}
