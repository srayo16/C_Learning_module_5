// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// Note : difference between 'a' and 'A' in ASCII is 32 .

// Input
// Only one line containing a character X which will be a capital or small letter.

// Output
// Print the answer to this problem.

#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 97 && a <= 122)
    {
        int b = a - 32;
        printf("%c", b);
    }
    else
    {
        int b = a + 32;
        printf("%c", b);
    }

    return 0;
}