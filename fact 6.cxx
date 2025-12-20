#include "SampleLib.h"

unsigned int fact(unsigned int value)
{
    unsigned int result = 1;

    while (value > 1)
    {
        result *= value;
        value--;
    }

    return result;
}

int power(int value, unsigned int pow)
{
    int result = 1;

    while (pow > 0)
    {
        result *= value;
        pow--;
    }

    return result;
}