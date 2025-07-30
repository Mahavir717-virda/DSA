#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *head = nullptr;

Node *create(int data)
{
    head = new Node;
    head->data = data;
    head->link = nullptr;
    cout << "Head node created successfully" << endl;

    return head;
}

Node *InsertElement(int data)
{
    if (head == nullptr)
    {
        cout << "List is empty. Create head first." << endl;
        return nullptr;
    }

    Node *newNode = new Node;
    newNode->data = data;
    newNode->link = nullptr;

    Node *temp = head;
    while (temp->link != nullptr)
    {
        temp = temp->link;
    }
    temp->link = newNode;

    cout << "Element inserted at last successfully." << endl;
    return newNode;
}

void display()
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    cout << "Linked List: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

void deletefront()
{
    Node *temp = head;
    head = head->link;
    delete (temp);
}

void deletelast()
{
    Node *temp = head;

    while (temp->link->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = NULL;
}

void insertatindex(int index, int data)
{
    Node *newnode = new Node;
    newnode->data = data;
    newnode->link = NULL;
    if (head == NULL && index == 1)
    {
        head = newnode;
    }
    else
    {
        int count = 0;
        Node *temp = head, *prev = NULL;
        while (temp != NULL)
        {
            if (count == index)
            {
                prev->link = newnode;
                newnode->link = temp;
                cout << "Element inserted at index successfully.." << endl;
            }
            count++;
            prev = temp;
            temp = temp->link;
        }
        cout << "index not found.." << endl;
    }
}
int main()
{
    int choice = -1;
    while (choice != 0)
    {
        cout << "\nEnter 1 to Create Head\nEnter 2 to Insert Element at last\nEnter 3 to delete front\nEnter 4 to delete from last\nEnter 5 to insert at index \nEnter 6 to display list\nEnter 0 to exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter data -> ";
            cin >> data;
            create(data);
        }
        break;
        case 2:
        {
            int data;
            cout << "Enter data -> ";
            cin >> data;
            InsertElement(data);
        }
        break;

        case 3:
            deletefront();
            break;

        case 4:
            deletelast();
            break;
        case 5:
        {
            int index;
            cout << "Enter index you want to enter data -> ";
            cin >> index;
            int data;
            cout << "Enter data -> ";
            cin >> data;
            insertatindex(index, data);
        }
        break;

        case 6:
            display();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}