#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);
        char st[n];
        scanf("%s", st);
        for (int i = 0; i < n; i++)
        {

            if (st[i] == 'A')
            {
                st[i] = 'T';
                
            }
            else if (st[i] == 'T')
            {
                st[i] = 'A';
                
            }
            else if (st[i] == 'C')
            {
                st[i] = 'G';
                
            }
            else if (st[i] == 'G')
            {
                st[i] = 'C';
               
            }
            
        }
        printf("%s \n", st);
    }
    return 0;
}