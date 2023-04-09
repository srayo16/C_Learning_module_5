// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Note:

// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc
// Input
// Only one line containing a character X which will be a capital or small letter or digit.

#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if (a >= 48 && a <= 57)
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (a >= 97 && a <= 122)
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    return 0;
}