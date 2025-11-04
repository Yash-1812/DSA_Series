#include <iostream>
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

class Circular_Linked_List{
    public:
    int count;
    Node* head;
    Node* tail;
    Circular_Linked_List(){
        count = 0;
        head = NULL;
        tail = NULL;
    }
};

void Insert_Node_at_Start(Circular_Linked_List &list , Node* n){
    if(list.count == 0){
        list.head = n;
        list.tail = list.head;
        list.count++;
    }
    else{
        n->next = list.head;
        list.head = n;
        list.tail = list.head;
        list.count++;
    }
}

void Insert_Node_at_End(Circular_Linked_List &list , Node *n){
    if(list.count == 0){
        list.head = n;
        list.tail = list.head;
        list.count++;
    }
    else{
        Node* temp = list.head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        list.tail = list.head;
        list.count++;
    }
}

void Delete_Node_at_Start(Circular_Linked_List &list){
    if(list.count == 0){
        cout << "The list is empty" << endl;
    }
    else{
        Node* temp = list.head;
        list.head = temp->next;
        list.tail = list.head;
        list.count--;
    }
}

void Delete_Node_at_End(Circular_Linked_List &list){
    if(list.count == 0){
        cout << "List is empty" << endl;
    }
    else if(list.count == 1){
        list.head = NULL;
        list.tail = NULL;
        list.count--;
    }
    else{
        Node* temp = list.head;
        Node* prev = list.head;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = list.tail;
        list.tail = list.head;
        list.count--;
    }
}

void Print_List(Circular_Linked_List &list){
    Node* temp = list.head->next;
    cout << list.head->data << endl;       // Explicitly write in first line
    while(temp != list.head){
        cout << temp->data << endl;
        temp = temp->next;
    }
}



int main(){
    Circular_Linked_List cll;
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Insert_Node_at_Start(cll , n1);
    Insert_Node_at_End(cll , n2);
    Insert_Node_at_End(cll , n3);
    Delete_Node_at_End(cll);
    Print_List(cll);
    
}




