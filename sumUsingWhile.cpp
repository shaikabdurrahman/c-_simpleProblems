//find sum of digits of int value
#include<iostream>
using namespace std;
int main()
{
    cout << "enter the number";
    int num,sum=0,temp;
    cin>> num;
    while(num!=0)
    {
        temp=num%10;
        sum=sum+temp;
        num=num/10;
    }
    cout<<"total sum = "<<sum<<endl;






}