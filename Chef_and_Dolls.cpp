#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l = 0, m = 0;
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
                l++;
            }
            else if (arr[i] % 2 != 0)
            {
                m++;
            }
        }
        cout << l + m << endl;
    }

    return 0;
}