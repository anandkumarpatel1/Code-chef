#include <stdio.h>
int main()
{
    int t, x;
    int total = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%d", &x);
        while (x != 0)
        {
            int k = x % 10;
            if (k == 7)
            {
                total++;
            }
            x /= 10;
        }
        if (total != 0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
        total = 0;
    }

    return 0;
}