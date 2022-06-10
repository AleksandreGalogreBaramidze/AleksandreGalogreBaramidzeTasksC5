#include<stdio.h>
#include "task5-4.h"

#define MAXLINE 1000

int main(void)
{
    char s[MAXLINE],t[MAXLINE];
    int ret;
    getline(s,MAXLINE);
    getline(t,MAXLINE);
    ret = strend(s,t);
    printf("%d \n",ret);
    return 0;
}

