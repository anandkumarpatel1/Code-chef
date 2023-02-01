#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m=0,l=0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                m++;
            }
            else if(arr[i] == -1)
            {
                l++;
            }
        }
        if(n%2 != 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<abs((l-m)/2)<<endl;
        }
    }

    return 0;
}