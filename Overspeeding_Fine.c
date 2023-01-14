#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int s;
    scanf("%d",&s);
    if (s <= 70)
    {
        printf("0 \n");
    }
    else if (s > 70 && s <= 100)
    {
        printf("500 \n");
    }
    else if (s > 100)
    {
       printf("2000 \n");
    }
    
    
}

return 0 ;
}