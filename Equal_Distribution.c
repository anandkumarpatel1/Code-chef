#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int a , b;
    scanf("%d %d", &a ,&b);
    if (a+b/2 == 0)
    {
        printf("Yes \n");
    }
    else
    {
        printf("NO /n");
    }
}

return 0 ;
}