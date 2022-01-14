//Write a program to print a histogram of the frequencies of different characters in its input.

#include <stdio.h>

#define ALPHABET_SIZE 26

int main()
{
    int c;

    int nsymbols[ALPHABET_SIZE];
    for(int i = 0; i < ALPHABET_SIZE; ++i)
        nsymbols[i] = 0;

    while((c = getchar()) != EOF)
    {
        if(c >= 'a' || c <= 'z')
        {
            ++nsymbols[c-'a'];
        }
    }

    for(int i = 'a'; i < 'z'+1; ++i)
        printf("%c ", i);
    printf("\n");
    
    int biggest_letter = 0;
    for(int i = 0; i < ALPHABET_SIZE; ++i)
    {
        if(nsymbols[i] > nsymbols[biggest_letter])
            biggest_letter = i;
    }
    
    int max_letter = nsymbols[biggest_letter];
    for(int i = 0; i < max_letter; ++i)
    {
        for(int j = 0; j < ALPHABET_SIZE; ++j)
        {
            if(nsymbols[j] > 0)
            {
                printf("| ");
                --nsymbols[j];
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}