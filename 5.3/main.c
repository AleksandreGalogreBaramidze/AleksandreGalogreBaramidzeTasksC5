#include<stdio.h>
#include "task5-3.h"

#define MAXLINE 1000

int main(void)
{
    char s[MAXLINE],t[MAXLINE];
    putchar('s');
    putchar(':');
    getline(s,MAXLINE);
    putchar('t');
    putchar(':');
    mgetline(t,MAXLINE);
    concat(s,t);
    printf("%s",s);
    return 0;
}

