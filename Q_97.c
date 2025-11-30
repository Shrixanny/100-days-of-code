// Q97: Print the initials of a name.

#include <stdio.h>

int main()
{
    char name[100];
    fgets(name, 100, stdin);

    printf("Enter name : %c.", name[0]);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}
