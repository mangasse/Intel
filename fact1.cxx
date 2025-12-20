#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
    printf("3! = %u\n", fact(3));
    printf("5! = %u\n", fact(5));
    printf("6! = %u\n", fact(6));

    return EXIT_SUCCESS;
}