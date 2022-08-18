#include <iostream>
#include "Basics.h"
#include <stdlib.h>
#include "Horoscopes.h"
using namespace std;

int main(){
	string name;
	char option, gender;
	int date, month, year, choice;
	
	Welcome();
	y_gap();
	system("pause");
	
	system("CLS");
	
	centre();
	cout<<"Do you want to know your FUTURE(Y/N)? "; cin>>option;
	if (option=='Y' or option=='y'){
		system("CLS");
		letsgo();
		y_gap();
		system("pause");
		system("CLS");
		
		centre();
		cout<<"Enter Your First Name: "; cin>>name;
		cout<<"\t\t\t\t\tEnter Date of Birth "<<endl;
		cout<<"\t\t\t\t\tEnter Date (In Digits): "; cin>>date;
		cout<<"\t\t\t\t\tEnter Month (In Digits): "; cin>>month;
		cout<<"\t\t\t\t\tEnter Year (In Digits): "; cin>>year;
		cout<<"\t\t\t\t\tEnter Gender (M/F): "; cin>>gender;
		
		system("CLS");
		while(1){
		cout<<endl;
		cout<<"NAME: "<<name<<endl;
		cout<<"AGE: "<<Age(year)<<endl;
		cout<<"GENDER: "<<gender<<endl<<endl;
		cout<<"\t\t\t\t\t  YOUR HOROSCOPE NAME IS "<<horo_name(date, month)<<endl;
		cout<<"\t\t\t  ----------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t1. ABOUT YOURSELF\t\t\t2. LUCKY NUMBERS\n\t\t\t\t3. LOVE COMPATIBILITY\t\t\t4. EXIT"<<endl<<endl;
		cout<<"\t\t\t\t\t  Enter any Choice: "; cin>>choice;
		
		if (choice==1){cout<<endl; about_yourself(astro_sign);}
		else if (choice==2){cout<<endl; lucky_num(astro_sign);}
		else if (choice==3){cout<<endl; love_compat(astro_sign);}
		else{exit(0);}
		system("pause");
		system("CLS");
	}
}
	else
		{cout<<endl<<"\t\t\t\t\t   THANK YOU! for approaching us";
		y_gap();
		system("pause");
		exit(0);
	}	
}
