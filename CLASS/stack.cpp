#include <iostream>
using namespace std;

void StackByArray(int max, int stack[])
{
    int top = -1;

    for (int i = 0; i < max; i++)
    {
        cout << "Enter data " << i + 1 << "-> ";
        top++;
        cin >> stack[top];
    }
}
int main()
{

    int size;
    cout << "Entr Stack size -> ";
    cin >> size;

    int stack[size];
    StackByArray(size, stack);

    for (int i = 0; i < size; i++)
    {
        cout << "Data " << i + 1 << "-> " << stack[i] << endl;
    }
    return 0;
}