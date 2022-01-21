//Write a function reverse(s) that reverses the character string s . Use it to write a program that reverses its input a line at a time. 

#include <stdio.h>

#define MAXLINE 1000

int getl(char line[], int maxline);
void reverse(char line[]);

int main()
{
    int len;
    char line[MAXLINE];

    while((len = getl(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s", line);
    }
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

void reverse(char line[])
{
    char buf, i;
    for(i = 0; line[i] != '\n' && line[i] != '\0'; ++i);
    for(int j = 0; j < --i; ++j)
    {
        buf = line[j];
        line[j] = line[i];
        line[i] = buf;
    }
}