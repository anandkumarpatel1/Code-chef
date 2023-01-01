#include <stdio.h>
int main()
{
int t ;
scanf("%d",&t);
while (t--)
{
   int n , m;
   scanf("%d %d",&n , &m);
   if (n > m){
    printf("%d",n + (n - m));
   }
   else{
    printf("%d", n);
   }
}

return 0 ;
}