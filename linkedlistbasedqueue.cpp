#include <iostream>
using namespace std;

struct node{
    int val;
    node* next;
};
node* head; node* cur;
int counter = 0;

void enqueue(int val){
    if(counter > 10-1){
        cout<<"Overflow, value: "<<val;
    }else{
        node* newnode = new node{val, nullptr};
    if(head == nullptr){
        head = newnode;
        cur = head;
        counter++;
    }else{
        cur -> next = newnode;
        cur = cur->next;
        counter++;
    }
    } 
}

void dequeue(){
    cout<<endl;
    cur = head;
    head = cur -> next;
    cout<<"\ncurrent deleted value: "<<cur->val;
    delete(cur);
}

void frontelement(){
    cout<<"\nfrontest element currently: "<<head->val;
}

void print(){
    cur = head;
    cout<<endl;
    if(head == nullptr){
        cout<<"\nUnderflow";
    }else{
        while(cur != nullptr){
            cout<<cur->val<<", ";
            cur = cur->next;
        }  
    }
}


int main(){
    for(int i = 0; i < 11; i++){
        enqueue(i+1);
    }
    frontelement();
    print();
    dequeue();
    print();
}