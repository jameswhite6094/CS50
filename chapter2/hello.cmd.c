/********
 * LT: I can code, compile,
 * and execute my first program in C.
 */

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("%s ",argv[0]);
    if(argc > 1)
    {
        printf("hello, %s\n", argv[1]);
        return 0;
    }
    else
    {
        return 1;
    }
}


