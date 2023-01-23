#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d;
        e = a - b;
        if (c > d)
        {

            if (e == 0)
            {
                cout << b * c << endl;
            }
            else
            {
                cout << (b * c) + (e * d) << endl;
            }
        }
        else
        {
            cout<<a*c<<endl;
        }
    }

    return 0;
}