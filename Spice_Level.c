#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int x;
    scanf("%d",&x);
    if (x < 4)
    {
        printf("MILD \n");
    }
    else if (x >= 4 && x < 7)
    {
        printf("MEDIUM \n");
    }
    else if (x >= 7)
    {
        printf("HOT \n");
    }
    
    
    
}

return 0 ;
}