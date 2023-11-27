#include <stdio.h>
#include <string.h>
int is_palindrome(char a[10001])
{
    int pal = 1;
    int i = 0;
    int j = strlen(a) - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{

    char a[10001];
    scanf("%s", a);
    int check = is_palindrome(a);
    if (check == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}