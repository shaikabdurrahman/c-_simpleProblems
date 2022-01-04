#include<iostream>
using namespace std;

int main()
{
    cout<< "enter the number"<<endl;
    int temp,num,digit,rev=0;
    cin>>num;
    temp=num;
    while(num!=0)
    {
    digit = num%10;
    rev = rev*10 + digit;
    num = num/10;
    }
    if(temp==rev)
    {
        cout<< "palindrome" << endl;
    }
    else
    {
        cout<< " not palindrome "<< endl;
    }
}