//write include statements
#include<iostream>
#include<string>
#include "decisions.h"
using std::cout; using std::cin;

int main() 
{
	int user_option;
	int grade;
	char letter_grade;

	cout<<"Main Menu \n 1-Letter grade using if \n 2-Letter grade using switch \n 3-Exit \n Option: ";
    cin>> user_option;
	switch(user_option)
	{
		case 1:
		cout<<"Enter grade: ";
		cin>> grade;
		letter_grade = get_letter_grade_using_if(grade);
		cout<<"Letter grade: "; cout<<letter_grade;cout<<"\n";
		break;

		case 2:
		cout<<"Enter grade: ";
		cin>> grade;
		letter_grade = get_letter_grade_using_switch(grade);
		cout<<"Letter grade: "; cout<<letter_grade;cout<<"\n";
		break;

		case 3:
		cout<<"You entered an invalid grade :(";
		break;
	}
	return 0;
}