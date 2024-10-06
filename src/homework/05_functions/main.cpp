//write include statements
#include<iostream>
#include<string>
#include "func.h"
using std::cout; using std::cin;

int main() 
{
	int user_option;
	string user_input;
	string dna_string;
	double output;
	string output1;

	cout<<"Main Menu \n 1-Get GC Content \n 2-Get Reverse \n 3-Get DNA Complement \n Option: ";
    cin>> user_option;
	switch(user_option)
	{
		case 1:
		cout<<"Enter DNA string: ";
		cin>> dna_string;
		output = get_gc_content(dna_string);
		cout<<"The GC content is: "; cout<<output;cout<<"\n";
		break;

		case 2:
		cout<<"Enter DNA string: ";
		cin>> dna_string;
		output1 = reverse_string(dna_string);
		cout<<"The reverse of the DNA string is: "; cout<<output1;cout<<"\n";
		break;

		case 3:
		cout<<"Enter DNA string: ";
		cin>> dna_string;
		output1 = get_dna_complement(dna_string);
		cout<<"The DNA complement is: "; cout<<output1;cout<<"\n";
		break;
	}
	return 0;
}