// program to determine whether the character is lower case or not  using conditinal operators.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter the character";
	cin>> ch;
	(ch>=97 && ch<=122)?cout<<"character entered is lower case":cout<<"character entered is not lower case";
	
}
