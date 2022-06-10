#include<stdio.h>

void concat(char *s,char *t)
{
    while(*s!='\0')
       s++;
    s--;
    while((*s=*t)!='\0')
    {   
        s++;
        t++;
    }
}
