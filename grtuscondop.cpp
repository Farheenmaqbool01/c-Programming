
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,lar;
	cout<<"enter the three number ";
	cin>> a>>b>>c;
	lar=(a>b)?a:(b>c)?b:c;
	cout<<lar;
}
