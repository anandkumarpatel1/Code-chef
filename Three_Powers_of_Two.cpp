#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                sum++;
            }
        }
        if (s == "1" || s == "10")
        {
            cout << "NO" << endl;
        }
        else if (sum <= 3)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }

        
    }
    return 0;
}