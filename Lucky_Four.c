#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int n,count = 0;
    scanf("%d",&n);
    while (n!=0)
    {
        int t = n%10;
        if (t==4)
        {
            count++;
        }
        n = n/10;
    }
    printf("%d \n",count);
}

return 0 ;
}