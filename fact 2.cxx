#include <stdio.h>
#include <stdlib.h>

unsigned int fact(unsigned int value)
{
    if (value <= 1)
        return 1;

    return value * fact(value - 1);
}

int main(void)
{
    printf("5! = %u\n", fact(5));
    return EXIT_SUCCESS;
}