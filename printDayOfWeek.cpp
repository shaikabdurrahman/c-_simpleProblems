//Input any Number and print day of a Week
#include <iostream>
using namespace std;
int main()
{
    int numOfDay;
    cout << "Enter any number from 1 to 7: " ;
    cin >> numOfDay;
    
    switch(numOfDay)
    {
        case 1:
        cout <<" Sunday ";
        break;
        case 2:
        cout <<" Monday ";
        break;
        case 3:
        cout <<" Tuesday";
        break;
        case 4:
        cout <<" wednessday ";
        break;
        case 5:
        cout <<" thursday ";
        break;
        case 6:
        cout <<" friday ";
        break;
        case 7:
        cout <<" saturday ";
        break;
        default:
        cout << " please enter a valid number ";
        break;

    }







}