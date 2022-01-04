//find multiplication of digits of integer value
#include<iostream>
using namespace std;
int main()
{
    int num,mul=1,temp;
    cout<<"Enter number";
    cin>>num;
    while(num!=0)
    {
        temp=num%10;
        mul=mul*temp;
        num=num/10;
    }
    cout<<"product is= "<<mul<<endl;

}