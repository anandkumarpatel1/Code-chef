#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int a, b;
    b = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] >= 1000)
        {
            b = b+1;
        } 
    }
    printf("%d",b);
    
}

return 0 ;
}