//write include statements
#include<iostream> //needs to be included when using cout or cin
#include "data_types.h" //tells c++ where to find the function multiply numbers
//write namespace using statement for cout
using std::cout; using std::cin; //also needs to be included when using cout and cin

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;

	int result = multiply_numbers(num);

	cout<<"Result: "<<result<<"\n";

	int num1 = 4;

	result = multiply_numbers(num1);

	cout<<"Result: "<<result<<"\n";
	return 0;
}
