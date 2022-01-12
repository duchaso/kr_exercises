//Write a program to count blanks, tabs, and newlines

#include <stdio.h>

int main()
{
    int c = 0;
    int nb, nt, nn;
    nb = nt = nn = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++nb;
        if(c == '\t')
            ++nt;
        if(c == '\n')
            ++nn;
    }
    printf("Blanks: %d, tabs: %d, newlines: %d.\n", nb, nt, nn);
}