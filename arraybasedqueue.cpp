#include <iostream>
using namespace std;

int queue[10];
int front = -1, rear = -1;

void enqueue(int val){
    if(rear == (sizeof(queue)/sizeof(int))-1){
        cout<<"\nOverflow, value: "<<val;
        return;
    }else{
        if(front == -1) front = 0;
        rear++;
        queue[rear] = val;
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        cout<<"\nUnderflow";
    }else{
        cout<<"\nDeleted: "<<queue[front];
        front++;
    }
}

void topel(){
    cout<<"\nmost front element: "<<queue[front];
}

void print(){
    cout<<endl;
    for(int i = front; i < (sizeof(queue)/sizeof(int)); i++){
        cout<<queue[i]<<" ";
    }
    
}



int main(){
    for(int i = 0; i < 13; i++){
        enqueue(i+ 1);
    }
    print();
    topel();
    dequeue();
    print();
}