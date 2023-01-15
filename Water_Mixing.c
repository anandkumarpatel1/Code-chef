#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a > b)
        {
            int e = (a - b);

            if (e <= d)
            {
                printf("YES \n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if (a==b)
        {
            printf("YES\n");
        }
        
        else if (a < b)
        {
            int f = (b - a);

            if (f<=c)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}