// programm to print whether the character is capital letter,small letter and digits;
#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter the character";
	cin>> c;
	for (c='A';c<='Z';c++)
	{
	cout<<"character is capital letter";
}
	for(c='a';c<='z';c++)
	{
	cout<<"character is small letter";
}
	for(c='0';c<='9';c++)
	{
	cout<<"character is digits";
}
	
	
}
