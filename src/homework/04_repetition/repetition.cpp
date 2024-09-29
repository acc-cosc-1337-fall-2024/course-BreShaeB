//add include statements
#include "repetition.h"
#include<string>
using std::cout; using std::cin; using std::string;

//add function(s) code here

int factorial(int num)
{
    auto product = 0;
    while (num > 0)
    {
        for (auto i = num + 1; i >= num; i++)
        {
            product = num * (i-1);
        }
    }
    return product;
}

int gcd(int num1, int num2)
{
    if (num1 == 0)
    {
        return num2;
    }
    if (num2 == 0)
    {
        return num1;
    }

    if (num1 > num2)
    {
        return gcd((num1-num2), num2);
    }
    if (num2 > num1)
    {
        return gcd((num2-num1), num2);
    }
}