#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n],key;

    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cin>>key;

    for(int i=0;i<n;i++)
    {
           if(key==a[i])
           {
              cout<<a[i];
              break;
           }
    }
}