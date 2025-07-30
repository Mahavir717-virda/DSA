#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    node *link;
};
struct node *head = NULL;

node *create(int data)
{
    head = new node;
    head->data = data;
    head->link = NULL;
    cout << "Head created successfully...." << endl;
    return head;
}

void display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

node *InsertAtEnd(int data)
{
    node *temp = head;

    node *newnode = new node;
    newnode->data = data;
    newnode->link = NULL;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newnode;
    return temp;
}

node *DeleteAtEnd()
{
    node *temp = head, *prev;
    prev->link=NULL;
    while (temp->link != NULL)
    {
        prev->link = temp->link;
        temp = temp->link;
    }
    prev->link = NULL;
    free(temp);
    temp=NULL;
}
int main()
{
    int choice = -1;

    while (choice != 7)
    {
        cout << "Enter 1 for creating head" << endl;
        cout << "Enter 2 for insert at end" << endl;
        cout << "Enter 3 for delete at end" << endl;
        cout << "Enter 6 for displaying the list" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int data;
            cout << "Enter data -> ";
            cin >> data;
            create(data);
            break;

        case 2:
            int data1;
            cout << "Enter data -> ";
            cin >> data1;
            InsertAtEnd(data1);
            break;

        case 3:
            DeleteAtEnd();
            break;
        case 6:
            cout << "Linked list is -> " << endl;
            display();
            break;
        default:
            cout << "Enter valid choice...";
            break;
        }
    }
    return 0;
}