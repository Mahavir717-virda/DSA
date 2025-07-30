#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *head = nullptr;

struct node *create(int data)
{
    head = new node;
    head->data = data;
    head->link = NULL;

    return head;
    cout << "Head created successfully..." << endl;
}

struct node *insert_at_last(int data)
{
    if (head == NULL)
    {
        cout << "List is empty..." << endl;
    }
    else
    {
        struct node *temp = head;
        while (temp->link != NULL)
        {
            temp->data = data;
            temp = temp->link;
        }
        temp->link = NULL;
    }
}
int main()
{
    int choice;
    cout << "Enter your choice : ";
    cin >> choice;

    cout << "1. Create" << endl;
    cout << "2. Insert at last" << endl;
    cout << "3. delete at last" << endl;

    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            break;
        }
    }

    return 0;
}