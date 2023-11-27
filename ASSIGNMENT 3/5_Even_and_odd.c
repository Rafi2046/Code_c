#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);
    int count_even = 0;
    int count_odd = 0;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    printf("%d %d", count_even, count_odd);
}

int main()
{
    odd_even();
    return 0;
}