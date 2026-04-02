#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

void printList(Node* head){
    while(head){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

void deleteAtPosition(Node*& head, int pos){
    if(head == NULL) return;

    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos-1; i++){
        temp = temp->next;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

int main(){

    int arr[5] = {10,12,15,20,11};

    Node* head = NULL;

    // Create list (reverse insertion)
    for(int i=0;i<5;i++){
        Node* temp = new Node(arr[i]);
        temp->next = head;
        head = temp;
    }

    printList(head);

    deleteAtPosition(head, 4);

    printList(head);

    return 0;
}