#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int x , y;
    scanf("%d %d ", &x , &y);
    if (x*3 <= y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}

return 0 ;
}