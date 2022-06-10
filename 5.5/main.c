#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "task5-5.h"

#define MAXSIZE 1000

int main(int argc, char *argv[])
{

    char dest[] = "ABCDEF";
    char source[] = "GHIJ";

    Vstrncpy(dest, source, 4);
    printf("%s\n", dest);

    char s1[]= "ABCD";
    char t1[]= "EFGHIJ";
    char *d;

    if ((d = (char *) malloc(sizeof(char) * (strlen(s1) + + 4 + 1))) == NULL) {
            printf("unable to allocate memory \n");
            return -1;
        }

    Vstrncat(s1, t1, d, 4);
    printf("%s\n", d);

    free(d);

    char s2[]= "ABCDEF";
    char t2[]= "ABC";
    int result;

    result = Vstrncmp(s2, t2, 3);

    printf("%d\n", result);

    return 0;
}

void Vstrncat(char *str1, char *str2, char *dest, int n) {
    while(*str1) {
        *dest++ = *str1++;
    }
    while(n-- >0) {
        *dest++ = *str2++;
    }

    *dest = '\0';
}


void Vstrncpy(char *dest,char *source,int n)
{
    while(*source && n-- > 0)
        *dest++ = *source++;

    int extra = Vstrlen(dest) - n;

    while (extra-- > 0) {
        *dest++;
    }

    *dest = '\0';
}

int Vstrncmp(char *lhs,char *rhs, int n)
{
    for(; *lhs == *rhs; lhs++,rhs++)
        if( *lhs == '\0' || --n <=0)
            return 0;
    return *lhs - *rhs;

}

int Vstrlen(char *s) {
    char *p = s;
    while (*s != '\0') {
        s = s + 1;
    }
    return s - p;
}

