#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
} *lptr = NULL, *rptr = NULL;

void create(int data)
{
    node *head = new node;
    head->data = data;
    head->next = NULL;
    head->prev = NULL;

    lptr = rptr = head;
    cout << "Head created successfully...." << endl;
}

void InsertAtEnd(int data)
{
    node *newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (lptr == NULL)
    {
        lptr = rptr = newnode;
    }
    else
    {
        newnode->prev = rptr->next;
        rptr->next = newnode;
        rptr = newnode;
        cout << "Element inserted at end successfully...." << endl;
    }
}

void InsertAtFront(int data)
{
    node *newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (lptr == NULL)
    {
        lptr = rptr = newnode;
    }
    else
    {
        lptr->prev = newnode;
        newnode->next = lptr;
        newnode->prev = NULL;
        lptr = newnode;
    }
}

void InsertAfterIndex(int data, int index)
{
    int count = 0;
    node *newnode = new node;
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (lptr == NULL)
    {
        lptr = rptr = newnode;
    }
    else
    {
        node *temp = lptr;
        while (temp != NULL)
        {
            if (count == index)
            {
                newnode->next = temp->next->next;
                temp->next = newnode;
                newnode->prev = temp;
                temp->next->next->prev = newnode;
                break;
            }
            count++;
            temp = temp->next;
        }
    }
}

void display()
{
    if (lptr == NULL)
        cout << "DLL is Empty..." << endl;
    else
    {
        node *temp = lptr;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

void deletefront()
{
    if (lptr == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        node *temp = lptr;
        lptr = lptr->next;
        lptr->prev = NULL;
         free(temp);
    }
}

void deletelast()
{
    if (lptr == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        node *temp = rptr;
        rptr = rptr->prev;
        rptr->next = NULL;
        free(temp);
    }
}
int main()
{
    create(17);

    InsertAtEnd(1);
    InsertAtEnd(2);
    InsertAtEnd(3);

    InsertAtFront(0);

    InsertAfterIndex(5, 1);

    // display();


    // deletefront();
    // deletefront();

    // deletelast();
    // deletelast();

    display();
    return 0;
}