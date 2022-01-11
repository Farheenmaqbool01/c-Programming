#include<iostream>
using namespace std;
int main()
{
	int sp,cp,loss,profit;
	cout<<"enter the selling price";
	cin>> sp;
	cout<<"enter the cost price";
	cin>> cp;
	if (cp>sp)
	{
		loss=cp-sp;
	cout<<"we incurred loss is"<<loss;
}
	else if (sp>cp)
	{
		profit=sp-cp;
	cout<<" profit is"<<profit;
}
	return 0;
}
