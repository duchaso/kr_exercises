// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>

float fahr_to_cels(float f);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr | Celsius\n");
    printf("--------------\n");
    while(fahr <= upper)
    {
        celsius = fahr_to_cels(fahr);
        printf("%5.0f|%6.1f\n", fahr, celsius);
        printf("--------------\n");
        fahr = fahr + step;
    }
}

float fahr_to_cels(float f)
{
    return (5.0/9.0) * (f-32.0);
}