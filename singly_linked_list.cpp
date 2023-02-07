
#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* nxt;

};


class linkedList
{

public:
    node * head ;
    int size;

//
    linkedList()
    {
        head = NULL;
        size=0;
    }

// get size
    void get_size()
    {
        cout<<size<<"\n";
    }

//    Creates a new node
    node* createNewNode(int value)
    {
        node *newNode = new node;
        newNode-> data = value;
        newNode-> nxt = NULL;
        size++;

        return newNode;

    }


//    Insert

    void inserNewNodeAtHead(int value)
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

    //    Insert at any point

    void inserNewNodeAtAnyPoint(int index,int value)
    {
        if(index<0||index>size)
        {
            return;
        }
        if(index==0)
        {
            inserNewNodeAtHead(value);
        }

        node *a= head;
        int current_index = 0;

        while(current_index !=index-1)
        {
            a = a->nxt;
            current_index++;
        }

        node *new_node = createNewNode(value);

        new_node->nxt = a->nxt;
        a->nxt = new_node;

    }

    //    Insert at any point

    void inserNewNodeAfterANyValue(int com_value,int value)
    {
        if(head == NULL)
        {
            return;
        }

        node *a= head;

        while(a != NULL)
        {

            if(a->data == com_value)
            {
                node *new_node = createNewNode(value);
                new_node->nxt = a->nxt;
                a->nxt = new_node;
                return;

            }

            a = a->nxt;

        }

        cout<<"Not exist your "<< com_value <<" in link list \n";





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



    //    delete at anyIndex

    void deleteAtAnyIndex(int index)
    {
        if(index<0||index>size)
        {
            return;
        }
        if(index==0)
        {
            deleteAtHead();
            return;
        }

        size--;

        node *a= head;
        int current_index = 0;

        while(current_index !=index-1)
        {
            a = a->nxt;
            current_index++;
        }

        node *b = a->nxt;
        a->nxt = b->nxt;



        delete b;

    }


    //    delete

    void deleteAtHead()
    {
        if(head == NULL)
        {

            return;
        }

        size--;

        node *a= head;
        head = a->nxt;

        delete a;

    }

//    Print

    void traverse()
    {
        node * a = head;

        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }

        cout<<"\n";

    }

//search distinct value
    int serchDistinctValue(int value)
    {
        node * a = head;
        int index = 0;

        while(a!=NULL)
        {
            if(a->data == value)
            {
                return index;

            }
            a = a->nxt;
            index++;
        }
        return -1;
    }


// all possible occurance

    void serchAllIndex(int value)
    {
        node * a = head;
        int index = 0;

        while(a!=NULL)
        {
            if(a->data == value)
            {
                cout<<value <<" is founded on index " << index  <<"\n";
            }
            a = a->nxt;
            index++;
        }

    }








};


int main()
{
    linkedList l;

    l.inserNewNodeAtHead(30);
    l.inserNewNodeAtHead(50);
    l.inserNewNodeAtHead(10);
    l.inserNewNodeAtHead(30);

    l.inserNewNodeAtAnyPoint(2,120);
    l.get_size();
    l.deleteAtHead();
    l.traverse();
    l.get_size();
    l.deleteAtAnyIndex(2);
    l.inserNewNodeAfterANyValue(120,130);
    l.traverse();
    l.get_size();
    l.printReverse();


    return 0;
}
