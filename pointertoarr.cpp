#include<iostream>
using namespace std;
int main()
{
	int arr[6]={4,5,6,1,2,3};
	for (int i=0;i<6;i++)
	{
		cout<<*(arr+i)<<endl;
	}
	
}
