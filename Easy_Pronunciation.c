#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
   int n;
   scanf("%d",&n);
   char st[n];
   for (int i = 0; i < n; i++)
   {
        scanf("%s",st[i]);
   }
   for (int i = 0; i < n; i++)
   {
        printf("%s",st[i]);
   }
   
}

return 0 ;
}