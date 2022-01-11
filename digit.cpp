
#include<iostream>
using namespace std;
int main()
{
     int n,num,r; 
     int r_num=0;
    cout<<"Enter a number: ";
    cin>>num;
    n = num;
    while(num!=0)
    {
        r_num = r_num * 10;

    cout<<"Reversed Number of  is :",n, r_num;

    if (n==r_num)
        r_num = num % 10 + r_num;

        num = num/10;
    }
        cout<<"Input Number  & Reversed Number is equal", n, r_num;
    else
        cout<<"Input Number  & Reversed Number  are not equal", n, r_num;

   return 0;
}
