#include <stdio.h>
#include <string.h>

int main()
{
    char r[20] = "something1";
    //r = "something";





    char s[20];
    strcpy(s,"something2");
    char *t = "something3";
    printf("%s %s %s", r, s, t);
}