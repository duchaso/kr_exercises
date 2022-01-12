//Write a program that prints its input one word per line. 

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, state;

    state = OUT;
    while((c = getchar()) != EOF)
    {
        while(c == ' ' || c == '\t' || c == '\n')
        {
            if(state == OUT)
                putchar('\n');
            state = IN;
            c = getchar();
        }
        state = OUT;
        putchar(c);
    }
    return 0;
}