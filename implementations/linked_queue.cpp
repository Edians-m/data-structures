#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
node* head=nullptr;
node* rear=nullptr;

//尾插
bool enqueue(int value){
    node* p=new node;
    p->data=value;
    p->next=nullptr;
    if(head == nullptr) head=rear=p;
    else{
        rear->next=p;
        rear=p;
    }
    return true;
}

//删除头节点
bool dequeue(){
    if(head == nullptr) return false;
    node* p=head;
    head=head->next;
    delete p;
    if(head == nullptr) rear=nullptr;
    return true;
}

//返回队头元素（不删除）
int getFront(){
    return head->data;
}

//判空
bool isEmpty(){
    return head == nullptr;
}

//释放所有节点
void clear(){
    node* p;
    while(head != nullptr){
        p=head;
        head=head->next;
        delete p;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout << "getFront: " << getFront() << endl;
    dequeue();
    cout << "after pop, getFront: " << getFront() << endl;

    while (!isEmpty()){
        cout << "pop: " << getFront() << endl;
        dequeue();
    }
    cout << "isEmpty: " << isEmpty() << endl;

    enqueue(100);
    cout << "getFront: " << getFront() << endl;
    clear();
}
