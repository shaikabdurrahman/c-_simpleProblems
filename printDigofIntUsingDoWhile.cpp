//print digits of interger value in reverse order
#include <iostream>
using namespace std;
int main()
{
  int num,temp;
  cout<<"enter any number: ";
  cin>>num;
  cout<<"the reverse order is= ";
  
  do
  {
      temp=num%10;
      cout<<temp;
      num=num/10;
   
  }
   while(num!= 0);
} 

