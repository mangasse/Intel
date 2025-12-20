#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int addition(int counter, ...)
{
    int sum = 0;
    va_list args;

    va_start(args, counter);

    while (counter > 0)
    {
        sum += va_arg(args, int);
        counter--;
    }

    va_end(args);
    return sum;
}

int main(void)
{
    printf("Addition = %d\n", addition(3, 4, 5, 6));
    printf("Addition = %d\n", addition(2, 10, 20));

    return EXIT_SUCCESS;
}