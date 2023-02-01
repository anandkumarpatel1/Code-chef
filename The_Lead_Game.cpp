#include <iostream>
using namespace std;
int main()
{
    int t, n = 0, max;
    cin >> t;
    int a[t], b[t], c[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < t; i++)
    {
        c[i] = abs(a[i] - b[i]);
    }
    max = c[0];
    for (int i = 0; i < t; i++)
    {
        if (max < c[i])
        {
            max = c[i];
            ++n;
        }
    }

    if (a[n] > b[n])
    {
        cout << "1 " << max;
    }
    else if (a[n] < b[n])
    {
        cout << "2 " << max;
    }

    return 0;
}