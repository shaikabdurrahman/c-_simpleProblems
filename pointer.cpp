#include<iostream>
using namespace std;
int main()
{
	cout<<"enter two numbers";
	int a,b;
	int *p,*q;
	cin>>a>>b;
	p=&a;
	q=&b;
	
	//*p**q;
	cout<<"product is"<<*p**q;
	
}
