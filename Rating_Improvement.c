#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int z = x + 200;
        if (y<=z && y>=x)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }
    }

    return 0;
}