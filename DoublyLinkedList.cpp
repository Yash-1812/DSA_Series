# include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class List{
    public:
    int count;
    Node* head;
    List(){
        count = 0;
        head = NULL;
    }
};

void Insert_Node_at_start(List &list , Node* n){
    if(list.count == 0){
        list.head = n;
        list.count++;
    }
    else{
        Node* temp = list.head;
        n->next = list.head;
        list.head = n;
        temp->prev = n;
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
        n->prev = temp;
        list.count++;
    }
}

void Remove_Node_from_start(List &list){
    if(list.count == 0){
        cout << "List is empty" << endl;
    }
    else{
        Node* temp = list.head;
        list.head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        list.count--;
    }
}

void Remove_Node_from_end(List &list){
    if(list.count == 0){
        cout << "List is empty" << endl;
    }
    else if(list.count == 1){
        list.head = NULL;
    }
    else{
        Node* temp = list.head;
        Node* prev = list.head;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        temp->prev = NULL;
        list.count--;
    }
}

void Print_list(List &list){
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
    
    Insert_Node_at_start(My_list , n1);
    Insert_Node_at_End(My_list , n2);
    Insert_Node_at_End(My_list , n3);
    Insert_Node_at_End(My_list , n4);
    Insert_Node_at_End(My_list , n5);
    Remove_Node_from_end(My_list);
    Print_list(My_list);
    cout << My_list.count;
}




