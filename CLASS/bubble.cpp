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
    for (int i = 0; i < n; i++)
    {
        // cout << "Value of i -> " << i << endl;
        bool exch = false;
        for (int j = 0; j < n - i - 1 ; j++)
        {
            // cout << "Value of j -> " << j << endl;
            if (arr[j] > arr[j + 1])
            {
                cout << "Value of jth element  after condition check -> " << arr[j] << endl;
                swap(arr[j], arr[j + 1]);
                exch = true;
            }
        }
        // cout << "Value of i after j loop -> " << i << endl;
        if (!exch)  break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}