#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char Words[500];
    int number; 
	int vowel_words;
	int Consonants;
	int ch_01;
	int digit_words;
	int spaces;
    int wl_01;
    wl_01=0;
	vowel_words=0;
	Consonants=0;
	ch_01=0;
	digit_words=0;
	spaces=0;
   
    cout<<"please enter a sentences of your on choose: ";
	cout<<"\n";
    gets(Words);
    for(number=0;Words[number]!='\0';++number)
    {
        if(Words[number]=='a' || Words[number]=='e' || Words[number]=='i' || Words[number]=='o' || Words[number]=='u' || Words[number]=='A' || Words[number]=='E' || Words[number]=='I' || Words[number]=='O' || Words[number]=='U')
            ++vowel_words;
        else if((Words[number]>='a'&& Words[number]<='z') || (Words[number]>='A'&& Words[number]<='Z'))
            ++Consonants;
        else if(Words[number]>='0'&& Words[number]<='9')
            ++digit_words;
        else if (Words[number]==' ')
            ++spaces;
    }
    cout<<"How many vowels are present in the sentences? "<<vowel_words;
    cout<<"\n";
	cout<<"How many Consonants are present in the sentences? "<<Consonants;
    cout<<"\n";
	cout<<"How many Digital numbers are present in the sentences? "<<digit_words;
    cout<<"\n";
	cout<<"How many blanck spaces are present in the sentences?"<<spaces;
    getch();
}