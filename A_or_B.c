#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while (t--)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int p1 = (500-(x*2));
    int p2 = (1000-((x+y)*4));
    int t1 = p1+p2;
    int p4 = (1000-(y*4));
    int p3 = (500-(x+y)*2);
    int t2 = p4+p3;
    if (t1==t2)
    {
        printf("%d\n",t1);
    }
    else if (t1>t2)
    {
        printf("%d\n",t1);
    }
    else
    {
        printf("%d\n",t2);
    }
    
}

return 0 ;
}