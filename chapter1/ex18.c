//Write a program to remove all trailing blanks and tabs from each line of input, and to delete entirely blank lines.

#include <stdio.h>

#define MAXLINE 1000

int getl(char line[], int maxline);
int rm_trailing_blanks(char line[], int len);

int main()
{
    char line[MAXLINE];
    int len;

    while((len = getl(line, MAXLINE)) > 0)
    {
        len = rm_trailing_blanks(line, len);
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

int rm_trailing_blanks(char s[], int len)
{
    //replace ' ' by '.' and '\t' by '_' for better vizualization
    while(s[--len] == '.' || s[len] == '_' || s[len] == '\n');
    s[len+1] = '\n';
    s[len+2] = '\0';
}