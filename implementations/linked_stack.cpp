#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
node* top=nullptr;

//头插
bool push(int value){
    node *p=new node;
    p->data=value;
    p->next=top;
    top=p;
    return true; 
}

//头删
bool pop(){
    if(top == nullptr) return false;
    node* p=top;
    top=top->next;
    delete p;
    return true;
}

//返回栈顶值
int getTop(){
    return top->data;
}

//判空
bool isEmpty(){
    return top == nullptr;
}

int main(){
    push(10);
    push(20);
    push(30);
    cout << getTop() << endl;
    pop();
    cout << getTop() << endl;

    while (!isEmpty()){
        cout << "popping " << getTop() << endl;
        pop();
    }
}
