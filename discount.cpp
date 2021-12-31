/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/

#include<iostream>

/*int main()
{
    int salary,yearOfService;
    cout << "enter your Salary: ";
    cin>> salary;
    
    cout<< "enter your Year of  Service: ";
    cin >> yearOfService;
    
    if(yearOfService>5)
    {
        cout << "the net bonus amount is "<<salary*.05;
    }
    else
    {
        cout<< "the net bonus amount is 0";
    }
  return 0;
} */

int main()
{
	using namespace std;
    
	int a,b;
	cout<<"Enter your salary amount";
	cin>>a;
	cout<<"Enter your year of service ";
	cin>>b;
	
	if(b>5){
		cout<<"the net bonus amount is: "<<a*0.05;
	}
	else{
		cout<<"No net bonus amount";
	}
}
