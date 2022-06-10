#include <stdio.h>

int strlength(char *t);

int strend(char *s,char *t)
{
    int len;
    len=strlength(t);
    while(*s!='\0')
        ++s;
    --s;

    while(*t!='\0')
        ++t;
            
    --t;
    while(len > 0)
    {
        if(*t==*s)
        {
            --t;
            --s;
            --len;
        }
        else
            return 0;
    }
    
    if( len == 0) return 1;
    else return 0;
}

int strlength(char *t)
{
    char *p;
    p=t;

    while(*p!='\0')
        ++p;

    return p-t;
}
