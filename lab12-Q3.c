#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int marks;
};

int main()
{
    struct Student *s;
    int n, i;

    printf("How many students? ");
    scanf("%d", &n);

    s = (struct Student *)malloc(n * sizeof(struct Student));

    for (i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudents scoring more than 75:\n");
    for (i = 0; i < n; i++)
    {
        if (s[i].marks > 75)
        {
            printf("%s - %d\n", s[i].name, s[i].marks);
        }
    }

    free(s);

    return 0;
}
