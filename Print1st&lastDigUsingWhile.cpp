//print 1st & last digit of int value
#include<iostream>
using namespace std;
int first(int n)
{
    while(n>=10)
    n=n/10;
    return n;

}
int last(int n)
{
    return (n%10);
}

int main()
{
int n;
cout<<"fisrt number"<<first(n)<<" "<<"last number"<<last(n);
}