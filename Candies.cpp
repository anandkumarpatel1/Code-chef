#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int cnt = 0;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < (2 * n); i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < (2 * n); i++)
        {
            cnt = 0;
            for (int j = 0; j < (2 * n); j++)
            {
                if (arr[i] == arr[j])
                {
                    cnt++;
                }
            }
            if (cnt == 3)
            {
                cout << "No" << endl;
                break;
            }
        }
        if (cnt < 3)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}