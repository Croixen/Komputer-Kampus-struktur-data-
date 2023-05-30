#include <iostream>
using namespace std;

struct node{
    int val;
    node* next;
};

node* head; node* cur;
int counter=0;

void stack(int val){
    counter++;
    if(counter > 10-1){
        cout<<"\nStack Overflow, the ignored value: "<<val;
    }else{
        node* newnode = new node{val, nullptr};
        if(head == nullptr){
            head = newnode;
        }else{
            cur = head;
            head = newnode;
            head -> next = cur;
        }
    }
}

void pop(){
    if(head == nullptr){
        cout<<"\nStack Underflow";
    }else{
        cur = head;
        head = head -> next;
        cout<<"\nDeleted value: "<<cur -> val;
        delete(cur);
    }
   
}

void print(){
    cout<<endl;
    if(head == nullptr){
        cout<<"\nStack Underflow";
    }else{
        cur = head;
        while(cur != nullptr){
            cout<<cur -> val<< " ";
            cur = cur -> next;
        }
    }
}

void peek(){
    cout<<"\nToppest Value: "<< head -> val;
}

int main(){
    for(int i = 0; i < 9; i++){
        stack(i+1);
    }
    peek();
    print();
    pop();
    print();
    
}