#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    int n,m=0,l=0;
    cin>>n;
    char str[n];
    char *ptr = str;
    for (int i = 0; i < n; i++)
    {
        cin>>ptr;
        ptr++;
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i]=='Y')
        {
            m++;
        }
        else if (str[i]=='I')
        {
            l++;
        }
        
    }
    if (l>0)
    {
        cout<<"INDIAN"<<endl;
    }
    else if (m>0)
    {
        cout<<"NOT INDIAN"<<endl;
    }
    else
    {
        cout<<"NOT SURE"<<endl;
    }
    
}

return 0 ;
}