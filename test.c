#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>

double average(int count, ...)
{
    va_list args;

    va_start(args, count);
    
    int sum = 0;
    int i = 0;

    while(i < count)
    {
        sum = sum + va_arg(args, int);
        i++;
    }
    va_end(args);
    return (sum);
}

int main()
{
    int avg0 =  average(4, 2, 15, 8, 15);
    int avg1 =  average(4, 3, 10, 6, 14);
    printf("output is: %d\n", avg0);
    printf("output is: %d\n", avg1);
    
return 0;
}