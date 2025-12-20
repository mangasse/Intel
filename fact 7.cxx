#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"

int main(void)
{
    printf("2^3 = %d\n", power(2, 3));
    printf("6! = %u\n", fact(6));

    return EXIT_SUCCESS;
}