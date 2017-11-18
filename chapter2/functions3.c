/****
 * LT: I can explain how functions are used
 * to manage complexity in programs and are
 * therefore an example of abstraction.
 * I can write and call a function in C
 * utilizing parameters and return type correctly.
 *
 * Starter: Write down 1 real-life example
 * where we use "functions."
 *
 * Vocabulary:
 * Function
 * reusable sections of code that
 * serve a particular purpose. Functions can take inputs and outputs,
 * and can be reused across programs.
 *
 * Abstraction
 * Layers of complexity so that details
 * are hidden that we don't care about below
 * the current level
 *
 * Prototype:
 * a declaration of a function that
 * specifies the function's name and
 * return type but omits the function body.
 *
 *
 *
 * Parameters
 * the function's inputs if it has any,
 * also called arguments
 *
 * Return Type
 * the data type of the function's
 * output that is "returned"
 * to the place where the function was
 * called.

 * Return value
 * the value that is "returned"
 * to the place where the function was
 * called.
 */

#include <stdio.h>
#include <cs50.h>

void cough(int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("Cough ");
    }
}

int main(void)
{
    cough(3);
}


