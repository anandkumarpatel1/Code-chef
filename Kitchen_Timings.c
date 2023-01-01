#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int x , y;
    scanf("%d %d", x , y);
    printf("\n", x-y);
}

return 0 ;
}