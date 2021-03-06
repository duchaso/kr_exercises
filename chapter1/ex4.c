//Write a program to print the corresponding Celsius to Fahrenheit table. 

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius | Fahr\n");
    printf("--------------\n");
    while(celsius <= upper)
    {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%8.0f|%6.1f\n", celsius, fahr);
        printf("--------------\n");
        celsius = celsius + step;
    }
    return 0;
}