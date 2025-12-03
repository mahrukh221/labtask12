#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPal(char str[], int start, int end)
{
    if (start >= end)
        return 1;

    if (tolower(str[start]) != tolower(str[end]))
        return 0;

    return isPal(str, start + 1, end - 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPal(str, 0, strlen(str) - 1))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
