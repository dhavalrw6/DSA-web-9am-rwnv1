#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
};

int main()
{
    Node *head = NULL;
    head = new Node();

    head->data = 10;
    head->next = NULL;

    Node *current = NULL;
    current = new Node();
    current->data = 20;
    current->next = NULL;
    head->next = current;

    current = new Node();
    current->data = 30;
    current->next = NULL;
    head->next->next = current;

    current = new Node();
    current->data = 40;
    current->next = NULL;
    head->next->next->next = current;


    Node *ptr = head;

    cout<<"Linked List: ";
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }

}