//Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>
#define MAXLINE 1000
#define MIN_LEN 8

int getl(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getl(line, MAXLINE)) > 0)
        if(len > MIN_LEN)
            printf("%s", line);
    return 0;
}

int getl(char s[], int lim)
{
    int c, i;

    for(i = 0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if(c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}
