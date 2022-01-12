//Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. 

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    printf("Fahr | Celsius\n");
    printf("--------------\n");
    while(fahr >= lower)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%5.0f|%6.1f\n", fahr, celsius);
        printf("--------------\n");
        fahr = fahr - step;
    }
    return 0;
}