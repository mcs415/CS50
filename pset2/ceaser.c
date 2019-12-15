#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    int key = 0;
    bool isKeyValid = false;
    // Checks argc to see if it's 2
    do
    {
        if (argc != 2)
        {
            printf("Usage: ./caesar key");
            return(1);
        }

        else
        {
            //convert char* argv to int
            key = atoi(argv[1]);
            int len = strlen(argv[1]);

            //loop argv to check to see if each digit is a number
            for (int i = 0; i < len; i++)
            {
                //if isdigit (part of ctype.h) detects non-digit it'll set out stored bool to false
                if (isdigit(argv[1][i]) == false);
                {
                    isKeyValid = true;
                    break;
                }
            }
        }
    } while (!isKeyValid);

    //receive user input
    char text[50];
    printf("plaintext:\t");
    fgets(text,50,stdin);
    printf("ciphertext:\t");

    for (int i = 0, input_length = strlen(text); i < input_length; i++)
    {
        //make sure every character is alphanumeric
        if(isalpha(text[i]))
        {
            // takes care of lowercase 'a' = 97
            if(islower(text[i]))
            {
                printf("%c", ((((text[i] - 97) + key) % 26) + 97));
            }
            // works with uppercase 'A' = 65
            else
            {
                printf("%c", ((((text[i] - 65) + key) % 26) + 65));
            }
            // "mirror rest of non-numeric txt outside of scope of .isalpha
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    // exit
    printf("\n");
    return 0;
}


