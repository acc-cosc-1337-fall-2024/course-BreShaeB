//write include statements
#include<iostream>
#include "hwexpressions.h"
using std::cout; using std::cin;

//write namespace using statement for cout

int main()
{
	double meal_amount;
	double tip_rate;
	double tax_amount;
	double tax_rate;
	double final_total;

	cout<<"Meal Amount: ";
    cin>> meal_amount;
	cout<<"Sales Tax: ";
    cin>> tax_rate;
    tax_amount = get_sales_tax_amount(meal_amount, tax_rate);
	cout<<"Tip Amount: ";
    cin>> tip_rate;
	final_total = get_tip_amount(tax_amount, tip_rate);
	cout<<"Total: ";
	cout<<final_total  <<"\n";
	return 0;
}
