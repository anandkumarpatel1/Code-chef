#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m = 0;
        scanf("%d", &n);
        int arr1[n], arr2[n], arr3[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr2[i]);
        }
        for (int i = 0; i < n; i++)
        {
            arr3[i] = arr1[i] + arr2[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr1[m] < arr1[i])
            {
                m = i;
            }
            else if (arr1[m] == arr1[i])
            {
                if (arr3[m] < arr3[i])
                {
                    m = i;
                }
            }
        }
        printf("%d \n",m+1);
    }
    return 0;
}