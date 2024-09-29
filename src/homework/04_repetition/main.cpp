//write include statements
#include<iostream>
#include<string>
#include "repetition.h"

//write using statements
using std::cout; using std::cin;

int main() 
{
	int user_option; int product2; int product; int num; int num1; int num2; int result;

	do
	{
		cout<<"Main Menu \n 1- Factorial \n 2- Greatest Common Divisor \n 3- Exit \n Option: ";
    	cin>> user_option;

		switch(user_option)
		{
			case 1:
			cout<<"Enter a number: ";
			cin>> num;
			product2 = factorial(num);
			cout<<"Factorial: "; cout<<product2; cout<<"\n";
			break;

			case 2:
			cout<<"Enter number 1: ";
			cin>> num1;
			cout<<"Enter number 2: ";
			cin>> num2;
			result = gcd(num1, num2);
			cout<<"Factorial: "; cout<<result; cout<<"\n";
			break;

			case 3:
			cout<<"You've exited the program'";
			break;
		}
	} while (user_option != 3);
}