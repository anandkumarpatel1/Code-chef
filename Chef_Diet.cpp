#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m = 0,y=0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] +m;
            if (arr[i] >= 4)
            {
                m = arr[i] - k;
            }
            else{
                cout<<"NO "<<i+1<<endl;
            }
        }
    }

    return 0;
}