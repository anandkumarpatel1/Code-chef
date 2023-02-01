#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x < y && x < z)
        {
            cout << "ALICE" << endl;
        }
        else if (y < x && y < z)
        {
            cout << "BOB" << endl;
        }
        else if (z < x && y > z)
        {
            cout << "CHARLIE" << endl;
        }
    }

    return 0;
}