#include "hwexpressions.h"
using std::cout; using std::cin;

//write function code here

//double tax_rate = 0.0675;

double get_sales_tax_amount(double meal_amount, double tax_rate)
{
	double meal_amount_subtotal = meal_amount + tax_rate;
	return meal_amount_subtotal;
}

double get_tip_amount(double tax_amount, double tip_rate)
{
	double final_total = tax_amount + tip_rate;
	return final_total;
}