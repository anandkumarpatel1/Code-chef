#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lar;
    int low;
    lar = arr[0];
    low = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (lar < arr[i])
        {
            lar = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (low > arr[i])
        {
            low = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (lar > arr[i] >= low)
        {
            cout << arr[i];
        }
    }

    return 0;
}