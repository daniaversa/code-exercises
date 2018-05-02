#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
/*
A program that encrypts messages using Caesar’s cipher. Your program must
accept a single command-line argument: a non-negative integer k. If your program is executed without any
command-line arguments or with more than one command-line argument, your
program should return a value of 1.
*/
int main(int argc, string argv[])
{
    //check number of arguments
    if(argc != 2)
    {
        printf("You need to enter only one argument. A positive integer or zero.\n");
        return 1;
    }
    else
    {
        //Get a key
        int k = atoi(argv[1]);
        //Validate if key is positive int
        if (k < 0)
        {
            printf("You need to enter a positive integer or zero.\n");
            return 1;
        }
            else
        {
            //Get a plain text
            string txt = get_string("Enter the plain text: ");
            //Encode the text
            for(int i = 0, n = strlen(txt); i < n; i++)
            {
                if (isalpha(txt[i]))
                {
                    //Check if it is lowercase, convert and print
                    if (islower(txt[i]))
                    {
                        printf("%c", (((txt[i] + k) - 97) % 26) + 97);
                    }
                    //Check if its uppercase, convert and print
                    else if (isupper(txt[i]))
                    {
                        printf("%c", (((txt[i] + k) - 65) % 26) + 65);
                    }
                }
                //Or print without converting
                else
                {
                    printf("%c", txt[i]);
                }
            }
            printf("\n");
            return 0;
        }
    }

}
