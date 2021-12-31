//simple calculator
#include <iostream>
 using namespace std;
 int main()
 {
     float p,q;
     char spclsymb;
     cout<< "Enter any two digits";
     cin>> p >> q;
     cin >> spclsymb;
      switch (spclsymb)
      {
      case '+':
          cout<<p+q<<endl;
          break;
          case '-':
          cout<<p-q<<endl;
          break;
          case '*':
          cout<<p*q<<endl;
          break;
          case '/':
          cout<<p/q<<endl;
          break;
          
      default:
      cout<<"invalid operator";
          break;
      }
 }