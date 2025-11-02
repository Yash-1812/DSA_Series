#include <iostream>
using namespace std;

class Node{
   int data;
   Node* next;

   Node(int val){
     data = val;
     next = NULL;
   }
};

class List{
   int count;
   Node* head;
   List(){
     int count = 0;
     head = NULL;
   }
};

void Insert(List &list , Node* n){
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

Node* Reverse(List &list){
  Node* curr = list.head;
  Node* prev = NULL;
  Node* next_ = NULL;
  while(curr != NULL){
    next_ = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}


int main(){
  Node* n1 = new Node(10);
  Node* n2 = new Node(20);
  Node* n3 = new Node(30);
}
