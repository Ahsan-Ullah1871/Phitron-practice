
#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* nxt;

};


class LinkedList
{

public:
    node * head ;
    int node_size;

//
    LinkedList()
    {
        head = NULL;
        node_size = 0;
    }

//    Creates a new node
    node* createNewNode(int value)
    {
        node *newNode = new node;
        newNode-> data = value;
        newNode-> nxt = NULL;
        node_size++;
        return newNode;

    }



//    Insert

    void InsertAtHead(int value)
    {
        node *a= createNewNode(value);

        if(head == NULL)
        {
            head = a;
            return;
        }

        a->nxt = head;
        head = a;
    }

//   get size
    int getSize()
    {

        return node_size;
    }


// get Value of index

    int getValue(int index)
    {
        node * a = head;
        int i  = 0;

        if(index >= node_size)
            return -1;
        else
        {
            while(a!=NULL)
            {
                if(i == index)
                {
                    return a->data;
                }
                a = a->nxt;
                i++;
            }
        }



    }


//    print reverse
    void printReverse()
    {
        if(head == NULL)
            return;

        printReverse(head);
        cout<<"\n";
    }
    void printReverse(node *current)
    {
        if(current == NULL)
            return;

        printReverse(current->nxt);
        cout << current->data << " ";
    }

    // swap first two
    void swapFirst()
    {
        if(head == NULL || head->nxt == NULL)
        {
            return;
        }
        node *temp = head->nxt;
        head->nxt = temp->nxt;
        temp->nxt = head;
        head = temp;
    }





//    Print

    void Traverse()
    {
        node * a = head;

        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }

        cout<<"\n";

    }



};


int main()
{
    LinkedList  l;

    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();



    return 0;
}
