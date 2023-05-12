#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct TheCell{
	int dat;
	struct TheCell *berikut;
};

struct TheCell *ptrCell = NULL;
struct TheCell *kepala = NULL;

void push(int isi){
	struct TheCell *baru;
	baru = new TheCell;
	if (kepala != NULL){
		baru -> berikut = kepala;
	}else{
		baru -> berikut = NULL;
	}
	kepala = baru;
	kepala -> dat = isi;
}

int top(){
	return kepala -> dat;
}

bool isEmpty(){
	if (kepala == NULL){
		return true;
	} else{
		return false;
	}
}

int pop(){
	if(kepala != NULL){
		int getData;
		getData = kepala -> dat;
		ptrCell = kepala;
		kepala = kepala -> berikut;
		delete(ptrCell);
		return getData;
	}
	else{
		return NULL;
	}
}

int main(){
	int bilRandom;
	for(int i = 1; i < 10; i++){
		bilRandom = rand();
		push(bilRandom);
	}
	
	ptrCell = kepala;
	while(ptrCell != NULL){
		cout<<ptrCell ->dat<<" ";
		ptrCell = ptrCell -> berikut;
	}
	cout<<endl<<endl<<pop();
	
	ptrCell = kepala;
	cout<<endl<<endl;
	while(ptrCell != NULL){
		cout<<ptrCell ->dat<<" ";
		ptrCell = ptrCell -> berikut;
	}
	
	cout<<endl<<endl<<top();
}

