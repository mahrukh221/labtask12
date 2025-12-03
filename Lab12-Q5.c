#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    char *c;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    c = (char *)malloc(strlen(a) + strlen(b) + 1);

    strcpy(c, a);
    strcat(c, b);

    printf("Concatenated string: %s", c);

    free(c);

    return 0;
}
