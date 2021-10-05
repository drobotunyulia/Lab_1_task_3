#include <stdio.h>
#include <stdarg.h>
#include <malloc.h>
#include <math.h>

int compute_polynom(int x, unsigned int power, ...);

int main()
{
    printf("Laba 1 Task 3\nDrobotun Yulia M8o-210B-20\n\n\n");
    printf("Result:\n");
    printf("%d", compute_polynom(4, 3, 1, 2, 3, 4));
    return 0;
}

int compute_polynom(int x, unsigned int power, ...)
{
    int *value = (int*)malloc((power + 1) * sizeof(int));
    va_list factor;
    va_start(factor, power);
    int result = 0;
    for(int i = power; i >= 0; i--)
    {
        value[i] = va_arg(factor, int);
    }
    for(int i = power; i >= 0; i--)
    {
        result = result + value[i] * pow((double)x, i);
    }
    free(value);
    return result;
}
