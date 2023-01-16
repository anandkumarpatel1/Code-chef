#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int a,x,b,y,s1,s2;
    scanf("%d %d %d %d",&a,&x,&b,&y);
    s1=a/x;
    s2=b/y;
    if (s1>s2)
    {
        printf("Alice\n");
    }
    else if (s1<s2)
    {
        printf("Bob\n");
    }
    else if(s1==s2)
    {
        printf("Equal\n");
    }
    
}

return 0 ;
}