#include<stdio.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

typedef struct Node *stack;

bool isEmpty(stack s){
    return (s==NULL);
}

Node *createNode(int data){
    Node *p = new Node();
    if(p==NULL){
        return NULL;
    }
    p->data = data;
    p->next = NULL;
}

void push(stack &s, int data){
    Node *ptr = createNode(data);
    if(isEmpty(s)){
        s = ptr;
    }
    else{
        ptr->next = s;
        s = ptr;
    }
}

int top(stack s){
    if(!isEmpty(s)){
        return s->data;
    }
    else{
        cout<<"Stack is Empty"<<endl;
    }
}

int pop(stack &s){
    if(!isEmpty(s)){
        int data = s->data;
        Node *x = s;
        s = s->next;
        delete(x);
        return data;
    }
    else{
        cout<<"Stack is Empty"<<endl;
    }
}

int main(){
    stack s;
    push(s,90);
    push(s,-99);
    push(s,35);
    push(s,23);
    push(s,22);
    push(s,25);
    push(s,13);
    push(s,34);

    cout<<"Gia tri top: "<<top(s)<<endl;
    cout<<"stack sau khi pop "<<pop(s)<<endl;

    while(!isEmpty(s)){
        int data = top(s);
        pop(s);
        cout<<data<<"<--";
    }

    return 0;
}