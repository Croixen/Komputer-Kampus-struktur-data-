#include <iostream>
using namespace std;
int stack[10]; int top = -1;

void push(int val){
    if(top == (sizeof(stack)/sizeof(int))-1){
        cout<<"\nStack Overflow, ignored value: "<<val;
        return;
    }else{
        top++;
        stack[top] = val;
        
    }
}

void pop(){
    if(top == -1){
        cout<<"\nStack Underflow"; 
        return;
    }else{
        cout<<"\nDeleted toppest value: "<<stack[top];
        top--;
    }
}

void print(){
    cout<<endl;
    if(top == -1){
        cout<<"Stack Underflow";
        return;
    }
    for(int i = top; i > -1; i--){
        cout<<stack[i]<<" ";
    }  
}

void topel(){
    if(top == -1){
        cout<<"\nStack Underflow";
        return;
    }
    cout<<"\nToppest element: "<<stack[top];
}

void clear(){
    top = -1;
}

int main(){
    for(int i = 0; i < 11; i++){
        push(i+1);
    }
    topel();
    print();
    pop();
    print();
    clear();
    pop();
}