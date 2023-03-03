#include <iostream>
using namespace std;

struct Node{
	int Data;
	Node* next = NULL;
	Node* previous = NULL;
};

Node *head, *first, *second, *current;

int main(){
	head = new Node;
	first = new Node;
	second = new Node;
	
	head -> Data = 12;
	head -> next = first;
	head -> previous = second;
	
	first -> Data = 13;
	first -> next = second;
	first -> previous = head;
	
	second -> Data = 25;
	second -> next = head;
	second -> previous = first;
	
	current = head;
	
	cout<<"<<Traverse Forward>>"<<endl;
	
	while(true){
		cout<<current << " | " <<current->Data<<" | "<<current -> next<<" : "<<current->next->Data<<endl;
		current = current -> next;
		if(current == head){
			break;
		}
	}
	
	cout<<endl<<"<<Traverse Backward>>"<<endl;
	current = second;
	
	while(true){
		cout<<current << " | " <<current->Data<<" | "<<current -> previous<<" : "<<current->previous->Data<<endl;
		current = current -> previous;
		if(current == second){
			break;
		}
	}
}
