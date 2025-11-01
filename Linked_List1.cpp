#include <iostream>
using namespace std;

class Node{
    public:
    Node* next;
    int data;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;
    int count;
    
    List(){
        count = 0;
        head = NULL;
        tail = NULL;
    }
};

void Insert_Node_at_Start(List &list , Node* n){
    if(list.count == 0){
        list.head = n;
        list.count++;
    }
    else{
        n->next = list.head;
        list.head = n;
        list.count++;
    }
}

void Insert_Node_at_End(List &list , Node* n){
    if(list.count == 0){
        list.head = n;
        list.count++;
    }
    else{
        Node* temp = list.head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        list.count++;
    }
}

void Remove_Node_from_Start(List &list){
    Node* temp = list.head;
    list.head = temp->next;
    list.count--;
} 

void Remove_Node_from_End(List &list){
    Node* temp = list.head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
    list.count--;
}

void Print_List(List &list){
    Node* temp = list.head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main(){
    List My_list;
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    Insert_Node_at_Start(My_list , n1);
    Insert_Node_at_End(My_list , n2);
    Insert_Node_at_End(My_list , n3);
    Insert_Node_at_End(My_list , n4);
    Insert_Node_at_End(My_list , n5);
    //Remove_Node_from_Start(My_list);
    Remove_Node_from_End(My_list);
    Print_List(My_list);
}




