#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    int l;
    cin>>l;
    if (l%2==0)
    {
        cout<<l<<endl;
    }
    else
    {
        cout<<l+2<<endl;
    }
    
}

return 0 ;
}