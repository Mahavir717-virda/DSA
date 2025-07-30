#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int largest = a[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (largest < a[i])
        {
            slargest=largest;
            largest = a[i];
        }
    }

    cout << largest << endl;
    cout << slargest << endl;
}