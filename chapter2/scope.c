//New comment
/******
 * LT: I can define procedures and explain their purpose.
 * I can explain the concept of scope and use correct scope
 * when defining variables in my programs.

 *
 * Starter:
 * If functions were not something we were able to work
 * with in our programs,
 * how might that change your coding strategy?
 * How might it impact your debugging strategy?
 *
 *
 *
*/

#include <stdio.h>
#include <cs50.h>

void cough(int x);

int num_times = 0;
int main(void)
{
    cough(3);
}

void cough(int x)
{
    int num_times = 6;
    for (int i = 0; i < x; i++)
    {
        printf("Cough ");
    }
}

/*
#include <cs50.h>
#include <stdio.h>

void cough(int n);
void say(string word, int n);

int n = 3;
int main(void)
{
    int n = 1;
    cough(n); //How many times will this print?
}

void say(string word, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", word);
    }
}

void cough(int n)
{
    int n = 3;
    say("cough", n);
}
*/