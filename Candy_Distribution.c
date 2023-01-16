#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a = n/m;
    
    if (a%2==0 && n%m==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
      
}

return 0 ;
}