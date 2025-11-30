// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main()
{

    int i, j, rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter the values of the matrix: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][i] == arr[j][j])
            {
                printf("Diagonal elements are distinct.\n");
                break;
            }
        }

        if (arr[i][i] == arr[j][j])
        {
            break;
            ;
        }

        for (int j = 0; j < columns; j++)
        {
            if (arr[i][i] != arr[j][j])
            {
                printf("Diagonal elements are NOT distinct.\n");
                break;
            }
        }

        if (arr[i][i] != arr[j][j])
        {
            break;

        }
    }

    return 0;
}

