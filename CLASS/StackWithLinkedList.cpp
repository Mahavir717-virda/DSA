#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    node *next;
}*top=NULL;

void push(int data)
{
    node *newnode = new node;
    newnode->data=data;
    newnode->next=top;
    top = newnode;
}
void pop()
{
    node *newnode = new node;
    newnode = top;
    top=top->next;
    cout << newnode->data;
    free(newnode);
}


void display()
{
   node *temp = top;
    
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

int main() {
   int data,choice=-1;
   
while(choice!=0)
   cin>>choice;
        switch(choice)
        {
            case 0:
                exit(0);
          case 1:
                cin>>data;
                push(data);
          break;
          case 2:
                pop();
                cout<<endl;
          break;
          case 3:
                display();
                cout<<endl;
          break;
        }
   
    return 0;
}
