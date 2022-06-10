#include<stdio.h>
#include "task5-6.h"
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define MAXLINE 1000
char pattern[] = "ou";

int main(void)
{
    char line[MAXLINE];

    int found=0;
    while((mgetline(line,MAXLINE)) > 0)
        if(strindex(line,pattern) >= 0) {
            printf("%s\n",line);
            found++;
        }
        
    char *s="1234";
    int ret;

    ret=atoiv2(s);
    printf("%d\n",ret);
    
    char s1[100];
    int i=12345;
    itoav2(i,s1);
    reverse(s1);
    printf("%s\n",s1); 

    char *s2="This is a line";
    char *t="line";
    ret=0;

    ret=strindex(s2,t);
    printf("%d\n",ret);

    return 0;

}

int atoiv2(char *s)
{
    int n,sign;

    for(;isspace(*s);s++)
        ;
    sign = ( *s =='-')? -1:1;

    if(*s=='+' || *s=='-')
        s++;
    for(n=0;isdigit(*s);s++)
        n = 10 *n + *s - '0';
    
    return sign * n;
}

void itoav2(int n,char *s)
{
    int sign;
    char *t=s;
    
    if((sign = n) < 0)
        n = -n;

    do
    {
        *s++ = n % 10 + '0';
    } while ((n /= 10) > 0);

    if(sign < 0)
        *s++ = '-';
    *s='\0';

}

void reverse(char *s)
{
    int c;
    char *t;

    for(t=s+(strlen(s)-1);s<t;s++,t--)
    {
        c=*s;
        *s=*t;
        *t=c;
    }
}

int mgetline(char *s,int lim)
{
    int c;
    char *t=s;

    while(--lim > 0 && (c=getchar())!='X' && c!='\n')
        *s++=c;

    if(c=='\n')
        *s++=c;
    *s='\0';

    return s-t;
}

int strindex(char *s,char *t)
{
    char *b=s;
    char *p,*r;

    for(;*s!='\0';s++)
    {
        for(p=s,r=t;*r!='\0' && *p==*r;p++,r++)
            ;

            if(r>t && *r == '\0')
                return s-b;
    }
    return -1;
}
