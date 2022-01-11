
#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter the character";
	cin>>c;
	(c>=0 && c<=47)?cout<<"character is special symbol":cout<<"character is not special symbol";
}
