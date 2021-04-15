#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
};

class LinkedList{
    public:
    Node *head=NULL;
    Node *tail=NULL;

    LinkedList(int a){
        Node *temp = new Node();
        temp->value = a;
        head=temp;
        tail=temp;
    }

    void addElement(int element){
        Node *temp = new Node();
        temp->value = element;
        temp->next = NULL;
        tail->next = temp;
        tail=temp;
    }

    void printALL(){
        Node *temp = new Node();
        temp=head;
        while(temp!=NULL){
            cout<< temp->value<< "  ";
            temp=temp->next;
        }
        cout<<endl;
    }
};


int main(){
    LinkedList *list = new LinkedList(10);
    list->addElement(20);
    list->printALL();
    return 0;
}