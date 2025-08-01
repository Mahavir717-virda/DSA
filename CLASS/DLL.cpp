#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int count1 =0;
struct node
{
    int data;
    node *next;
    node *prev;
} *lptr=NULL,*rptr=NULL;

void inserfront(int data)
{
    node *newnode= new node;
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(lptr==NULL)
    {
        lptr=rptr=newnode;
    }
    else
    {
        newnode->next=lptr;
        lptr->prev=newnode;
        lptr=newnode;
    }
}

void insertend(int data)
{
    node *newnode = new node;
        newnode->data=data;
        newnode->next=NULL;
        newnode->prev=NULL;
    if(lptr==NULL)
    {
        lptr=rptr=newnode;
    }
    else
    {
        newnode->prev=rptr;
        rptr->next=newnode;
        rptr=newnode;
    }
}

void deletefront()
{
    if(lptr==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
        node *temp = lptr;
        lptr=lptr->next;
        lptr->prev=NULL;
        free(temp);
    }
}

void deletelast()
{
    if(lptr==NULL)
    {
                cout<<"List is Empty";
    }
    else
    {
        node *temp = rptr;
        rptr = rptr->prev;
        rptr->next=NULL;
        free(temp);
    }
}

void insertafterindex(int olddata,int newdata)
    
{
    int count=0;
    node *newnode = new node;
    newnode->data=newdata;
    newnode->next=NULL;
    newnode->prev=NULL;
    
    if(lptr==NULL)
    {
        lptr=rptr=newnode;
    }
    else
    {
        node *temp = lptr;
        while(temp!=NULL)
        {
            if(olddata == temp->data)
            {
                 newnode->prev = temp;
                 newnode->next = temp->next;
                 temp->next=newnode;
            }
            temp=temp->next;
        }
    }
}

int countnumber()
{
    if(lptr==NULL)
    {
        return 0;
    }
    else
    {
        while(lptr!=NULL)
        {
            count1++;
            lptr=lptr->next;
        }
}
    return count1;
}
void display()
{   
   node *temp = lptr;
        while(temp!=NULL)
        {
            cout << temp->data << " ";
            temp=temp->next;
        }
    cout<<endl;
 }
int main() {
      
    int choice = -1;
     int data,index;
   
    while(choice != 0)
    {
         cin>>choice;
    switch(choice)
    {
        case 1: 
            cin>>data;
            inserfront(data);        
            break;
        case 2:
            cin>>data;
            insertend(data);
            break;
        case 3:
            deletefront();
            break;
        case 4:
            deletelast();
            break;
        case 5:
            cin>>index>>data;
            insertafterindex(index,data);
            break;
        case 6:
            display();
            break;
        case 7:
            cout << countnumber();
            break;
        case 0: 
            exit(0);
    }
    }
    return 0;
}
