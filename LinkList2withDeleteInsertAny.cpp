#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;

class Node {
    public:
   int data;
   Node* next;
};
Node* head = NULL;

void insertOnFirst(int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void insertOnLast(int new_data) {

    if(head==NULL)
    {
        head=new Node();
        head->data=new_data;
        head->next=NULL;
    }
    else
    {
        Node* current_node = new Node();
        current_node = head;
        while(current_node->next != NULL)
            current_node=current_node->next;
        Node *new_node = new Node();
        new_node->data=new_data;
        new_node->next=NULL;

        current_node->next=new_node;
    }
}

void insertAfterValue(int value, int new_data){
    Node* temp = new Node();
    Node* temp2 = new Node();
    temp = head;
    while(temp->next != NULL){
            if(temp->data == value)
            break;
        temp = temp->next;
        temp2 = temp->next;
    }
    Node* new_node =  new Node();
    new_node->data = new_data;
    new_node->next = temp2;
    temp->next = new_node;
}

void deleteNode(int value){
    Node* temp = new Node();
    Node* temp2 = new Node();

    temp = head;
    while(temp->next != NULL){
        if(temp->data == value)
            break;
        temp2 = temp;
        temp = temp->next;
    }
    if(temp->data == head->data){
        head = temp->next;
    }else{
        temp2->next = temp->next;
    }

}


void display() {
   Node* ptr;
   ptr = head;
   while (ptr != NULL){
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insertOnLast(1);
   insertOnLast(2);
   insertOnLast(3);
   insertOnLast(4);
   insertOnLast(5);
   insertOnFirst(0);
   insertOnLast(6);
   insertAfterValue(4, 7);
   deleteNode(0);
   cout<<"The linked list is: ";
   display();

   return 0;
}

