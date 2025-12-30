/* Q4. Write a C program to display the following message. 
All the white space in the message is created using the space character.

========================
=                      =
= She sells sea shells =
=                      =
======================== */

#include <stdio.h>

int main(void)
{
    int i;
    char msg[] = "She sells sea shells";

    for (i = 0; i < 5; i++)
    {
        if (i == 0 || i == 4)
        {
            printf("========================\n");
        }
        else if (i == 2)
        {
            printf("= %20s =\n", msg);
        }
        else
        {
            printf("=                      =\n");
        }
    }

    return 0;
}