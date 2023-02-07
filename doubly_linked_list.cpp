
#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* nxt;
    node* prev;

};


class DoublyLinkedList
{

public:
    node * head ;
    int size;

//
    DoublyLinkedList()
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
        newNode->prev = NULL;
        size++;

        return newNode;

    }


//    Insert

    void inserNewNodeAtHead(int value)
    {
        node *newnode= createNewNode(value);

        if(head == NULL)
        {
            head = newnode;
            return;
        }

        node *a = head;
        newnode->nxt = a;
        a->prev = newnode;
        head = newnode;
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
        node *b = a->nxt;

        new_node->nxt = a->nxt;
        a->nxt = new_node;
        new_node->prev = a;
        b->prev = new_node;

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
        if(index<0||index>=size)
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

        while(current_index !=index)
        {
            a = a->nxt;
            current_index++;
        }

        node *b = a->prev;
        node *c = a->nxt;

        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c != NULL)
        {
            c->prev = b;
        }



        delete a;

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
        a->prev=NULL;

        delete a;

    }




    //reverse list
    void reverse_list()
    {
        node *a = head;

        int current_index =0;
        while(current_index !=size-1)
        {
            a = a->nxt;
            current_index++;
        }

        node *b = head;
         while(b != NULL)
        {
            swap(b->nxt,b->prev);
            b=b->prev;
        }
        head = a;


    }

//    Print

    void traverse()
    {
        node * a = head;

        while(a!=NULL)
        {
            cout<<a->data  <<" ";
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
    DoublyLinkedList dl;
    dl.inserNewNodeAtHead(50);
    dl.inserNewNodeAtHead(40);
    dl.inserNewNodeAtHead(30);
    dl.traverse();
    dl.inserNewNodeAtAnyPoint(1,20);
    dl.traverse();
    dl.deleteAtAnyIndex(2);
    dl.traverse();
    dl.reverse_list();
    dl.traverse();


    return 0;
}
