#include <cs50.h>
#include <stdio.h>

/** What are arrays, really? ***/
/** How are arrays an abstraction ***/

int main()
{
    string months[12];
    months[0] = "January";
    months[1] = "February";
    months[2] = "March";
    printf("%s\n", months[0]);
    printf("Length: %lu\n", sizeof(months)/sizeof(string));
    for(int i = 0; i < 3; i++)
    {
        printf("%s ", months[i]);
    }
}