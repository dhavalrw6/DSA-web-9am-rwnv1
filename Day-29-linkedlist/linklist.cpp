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
    head->data = 25;
    head->next = NULL;

    Node *n2 = new Node();
    n2->data = 30;
    n2->next = NULL;
    head->next = n2;

    Node *n3 = new Node();
    n3->data = 35;
    n3->next = NULL;
    n2->next = n3;


    cout<<head<<" - "<<head->data<<" - "<<head->next<<endl;
    cout<<head->next<<" - "<<n2->data<<" - "<<n2->next<<endl;
    cout<<n2->next<<" - "<<n3->data<<" - "<<n3->next<<endl;

    return 0;
}