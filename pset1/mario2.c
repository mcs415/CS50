/**
 *  Morgan Sippel
 *  mcsippel@protonmail.com
 *  11/17/19
 *  Problem Set 1: Mario(less comfortable)
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{    
    int height = get_int("Height: ");
    if (height > 0 && height < 9)
    for (int i = 0; i < height; i++)
    {
        // print spaces
        for (int j = 0; j < height - 1 - i; j++)
        {
            printf(" ");
        }
        // print hashes
        for (int j = 0; j < i +1; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i +1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    else {
        return 1;
    }
}

