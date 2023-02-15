#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, s, k = 0;


//              This answer is wrong half true hai baki overflow hai


        cin >> n >> m;
        s = n + m;
        char str1[n];
        char str2[m];
        char str3[s];
        char str4[s];
        cin >> str1 >> str2;
        for (int i = 0; i < n; i++)
        {
            str3[i] = str1[i];
        }
        for (int i = 0; i <= m; i++)
        {
            str3[i + n] = str2[i];
        }
        for (int i = 0; i <= s; i++)
        {
            str4[i] = str3[s - 1 - i];
        }
        cout<<str3<<endl<<str4<<endl;
        if (str3 == str4)
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