#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int top = -1;
int stackarray[50];

void push(int data)
{
    
    top++;
    stackarray[top] = data;
}
int pop()
{
    if(top == -1) return -1;
    int data = stackarray[top];
    top--;
    
    return data;
}

int peek()
{
    int data = stackarray[top];
    
    return data;
}

int isempty()
{
    if(top == -1) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
   int n , data,choice;
   cin>>n;
   
   for(int i=0;i<n;i++)
   {
   cin>>choice;
        switch(choice)
        {
          case 1:
                cin>>data;
                push(data);
          break;
          case 2:
                cout<<pop()<<endl;
          break;
          case 3:
                
                cout<<peek()<<endl;
          break;
          case 4:
                cout<<isempty()<<endl;
          break;
        }
   }
    return 0;
}
