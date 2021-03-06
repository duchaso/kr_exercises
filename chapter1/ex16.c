//Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as much as possible of the text. 

#include <stdio.h>
#define MAXLINE 5 

int getl(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getl(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if(max > 0)
        printf("%s\n", longest);
    printf("Len: %d\n", max);
    return 0;
}

int getl(char s[], int lim)
{
    int c, i;

    for(i = 0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    {
        s[i] = c;
    }
    if(i < lim-1)
    {
        if(c == '\n')
        {
            s[i] = c;
            ++i;
        }
        s[i] = '\0';
        return i;
    } else {
        s[lim-2] = '\n';
        s[lim-1] = '\0';
        while((c=getchar()) != EOF && c!='\n')
            ++i;
        ++i;
    }
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}