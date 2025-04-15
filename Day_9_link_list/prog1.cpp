#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }    
};

class LinkList{
    public: 
        Node* head;
        int size;

    LinkList(){
        this->head = NULL;
        this->size = -1;
    }    

    void insertAtFront(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL)
        {
            this->head = newNode;
        }
        else
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        this->size++;
    }

    void insertAtEnd(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL)
        {
            this->head = newNode;
        }
        else
        {
            Node* temp = this->head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        this->size++;
    }

    void insertAtIndex(int index,int element){
        if(index == 0){
            this->insertAtFront(element);
        }
        else
        {
            Node* newNode = new Node(element);
            Node* temp = this->head;
            for(int i=0;i<index-1;i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void updateList(int index,int element){

        Node* current = this->head;
        for(int i=0; i < index; i++){
            current = current->next;
        }
        current->data = element;
    }

    void deleteAtFront(){
        Node* temp = this->head;
        this->head = this->head->next;
    }

    void deleteAtIndex(int index){

    }

    void deleteAtEnd(){
        Node* temp = this->head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
    }

    void displayList(){

        cout<<"LinkList: ";
        Node* temp = this->head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main()
{

    LinkList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtIndex(1,20);
    list.displayList();
    list.updateList(1,22);
    list.displayList();
    list.deleteAtFront();
    list.displayList();

    return 0;
}