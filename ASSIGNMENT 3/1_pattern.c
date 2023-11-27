#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int coll = 1; coll <= n - row; coll++)
        {
            printf(" ");
        }
        for (int coll = 1; coll <= 2 * row - 1; coll++)
        {
            if (row % 2 == 0)
            {
                printf("-");
            }
            else if (row % 2 == 1)
            {
                printf("#");
            }
        }

        printf("\n");
    }

    for (int row = n - 1; row >= 1; row--)
    {
        for (int coll = 1; coll <= n - row; coll++)
        {
            printf(" ");
        }
        for (int coll = 1; coll <= 2 * row - 1; coll++)
        {
            if (row % 2 == 0)
            {
                printf("-");
            }
            else if (row % 2 == 1)
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}