// Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. 

#include <stdio.h>

#define MAX_WORD_LENGTH 20
#define IN 1
#define OUT 0

int main()
{
    int c;
    int lword[MAX_WORD_LENGTH];
    for (int i = 0; i < MAX_WORD_LENGTH; ++i)
        lword[i] = 0;

    int state = OUT;
    int letter_cnt = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            if(state == IN)
            {
                if(letter_cnt > MAX_WORD_LENGTH)
                    letter_cnt = MAX_WORD_LENGTH;
                ++lword[letter_cnt-1];
                letter_cnt = 0;
            }
            state = OUT;
        } else {
            ++letter_cnt;
            state = IN;
        }
    }

    for(int i = 1; i < MAX_WORD_LENGTH+1; ++i)
    {
        printf("%2d:", i);
        while(lword[i-1]-->0){
            printf("-");
        }
        printf("\n");
    }
        
        

    return 0;
}