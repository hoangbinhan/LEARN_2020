#include<stdio.h>
#include<iostream>
using namespace std;

int current_size = -1;
const int MAX_SIZE = 100;
int stack[MAX_SIZE];

bool isEmpty(){
    return (current_size == -1);
}

bool isFull(){
    return (current_size == MAX_SIZE);
}

void push(int data){
    if(isFull()==false){
        current_size++;
        stack[current_size] = data;
    }
    else {
        cout << "Stack full" << endl;
    }
}

int top(){
    if(!isEmpty){
        int data = stack[current_size];
        return data;
    }
    else {
        cout<<"stack empty"<<endl;
    }
    return NULL;
}

int pop(){
    if(!isEmpty){
        int data = stack[current_size];
        current_size--;
        return data;
    }
    else {
        cout<<"stack empty"<<endl;
    }
}

int main(){
    push(100);
    push(-255);
    push(-25);
    cout<<"TOP: "<<top()<<endl;
    return 0;
}