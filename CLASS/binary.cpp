#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], key;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> key;
    int lower = 0;
    int high = n - 1;

    for (int i = 0; i < n; i++)
    {
        int mid = (lower + high) / 2;
        if (key > a[mid])
            lower = mid + 1;
        else if (key < a[mid])
            high = mid - 1;
        if (key == a[mid])
            cout << a[mid] << endl;
    }
}