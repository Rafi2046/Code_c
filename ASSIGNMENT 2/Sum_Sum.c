#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int pos_sum = 0;
    int neg_sum = 0;
    int number;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number);
        if (number > 0)
        {
            pos_sum += number;
        }
        else if (number < 0)
        {
            neg_sum += number;
        }
    }

    printf("%d %d\n", pos_sum, neg_sum);

    return 0;
}
