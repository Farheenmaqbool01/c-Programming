
#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,valid;
	cout<<"enter the three side of traingle";
	cin>> s1,s2,s3;
    if((s1+s2>s3) && (s2+s3>s1) && (s3+s1>s2))
    valid=1;
    if (valid==1)
	cout<<"traingle is valid";
	else
	cout<<"traingle not valid";
}
