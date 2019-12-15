#include <stdio.h>
#include <cs50.h>
#include <math.h>

    //calculates the number of digits in the card number

int getCardDigits(long long cardnumber)
{

    int card_digits= (int)log10(cardnumber) + 1;
    return card_digits;

}

int main(void)
{
    // get card digits from user
    long long cardnumber = get_long_long("What is your credit card number?\n");

    int card_digits = getCardDigits(cardnumber);

    // if not a valid credit card number print "invalid"
    if (card_digits != 13 && card_digits != 15 && card_digits != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    else
    {
        printf("%d\n",card_digits);
    }
    int number[card_digits];

    for (int i = 0; i < card_digits; i++)
    {
        number[i] = cardnumber % 10;
        cardnumber = cardnumber / 10;
    }
    for (int i = 0; i < card_digits; i++)
    {
        printf("%d ", number[i]);
    }
    
    int oddsum = 0;

    for (int i = 0; i < card_digits; i+=2)
    {    
        oddsum += number[i];
    }
    
    printf("\n%d\n", oddsum); //does work 
    //struggling here
    int evensum = 0; int sumdigits;
    for (int i = 1; i < card_digits; i+=2)
    {
        if (2 * (number[i] % 10) > 9)
        {    
            evensum += (2 * number[i]/10);
            evensum += (2 * number[i]%10);
        }
        else
        {
            evensum += 2 * number[i];
        }
    }
    printf("%d\n", evensum);

    printf("%d\n", evensum + oddsum);


    if ((oddsum+evensum) % 10 == 0)
    {
        if (number[13] || number[14] || number[15] || number[16] == 4)
        {
            printf("MASTERCARD\n");
        }
        if (number[16] == 5 && number[15] > 0 && number[15] < 5)
        {
            printf("VISA\n");
        }
        if (number[15] == 3 && number[14] == 4)
        {
            printf("AMEX\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

