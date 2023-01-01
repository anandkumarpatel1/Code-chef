#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int a;
    scanf("%d", &a);
    if(a == 1)
    {
        printf("normal");
    }
    else if (a == 2)
    {
        printf("huge");
    }
    else if (a == 3)
    {
        printf("small");
    }
    
    /* code */
}

return 0 ;
}