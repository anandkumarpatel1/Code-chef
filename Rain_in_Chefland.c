#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
for (int i = 0; i < t; i++)
{
    int a;
    scanf("%d",&a);

    if (a < 3)
    {
        printf("lIght \n");
    }
    if (a >= 3 && a < 7)
    {
        printf("Moderate \n");
    }
    if (a >= 7)
    {
        printf("Heavy \n");
    }
    
}

return 0 ;
}