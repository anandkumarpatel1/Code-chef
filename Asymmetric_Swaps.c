#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, max, min, arr1[n], arr2[n];
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        max = arr1[0];
        min = arr1[0];
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > max)
            {
                max = arr1[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] < min)
            {
                min = arr1[i];
            }
        }
        printf("%d", (max - min));
    }

    return 0;
}