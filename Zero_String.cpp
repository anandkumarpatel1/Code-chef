#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int z = 0, one = 0;
        char str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            if (str[i] == '1')
            {
                one++;
            }
            else
            {
                z++;
            }
        }
        if (one == 0)
        {
            cout << "0" << endl;
        }
        else if (z == 0)
        {
            cout << "1" << endl;
        }
        else if (z == one)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }

    return 0;
}