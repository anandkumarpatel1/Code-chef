#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
    int a, b,c;
    cin>>a>>b>>c;
    if ((a+1)*c >= b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}

return 0 ;
}