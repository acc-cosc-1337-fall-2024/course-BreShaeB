    //add include statements
#include<string>
#include "func.h"
using std::cout; using std::cin; using std::string;


//add function code here
double get_gc_content(const string& dna)
{
    double num = 0 ;
    double total;
    total = dna.size();
    for (auto i = 0; i < total; i++)
    {
        if( dna[i] == 'G' || dna[i] == 'C')
        {
            num ++;
        }
    }
    double result = num/total;
    return result;
}
string get_dna_complement(const string dna)
{
    int total = dna.size();
    string flipped = "";
    string flipped1;
    for (auto i = 0; i < total; i++)
    {
        if( dna[i] == 'G')
        {
            flipped += 'C';
        }
        else if( dna[i] == 'T')
        {
            flipped += 'A';
        }
        else if( dna[i] == 'C')
        {
            flipped += 'G';
        }
        else if( dna[i] == 'A')
        {
            flipped += 'T';
        }
    }
   
    for (int i = flipped.size() - 1; i >= 0; i--)
    {
        flipped1 += flipped[i];
    }
    return flipped1;
}
string reverse_string(const string dna)
{  
    int total = dna.size();
    string reverse;
    for (int i = total - 1; i >= 0; i--)
    {
        reverse += dna[i];
    }
    return reverse;
}
