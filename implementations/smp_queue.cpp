#include <iostream>
using namespace std;

int queue[100];
int frontIndex=0;       // 队头索引
int rearIndex=0;        // 队尾索引，尾指针指向下一个空位置
int capacity=100;       // 容量，牺牲一个容量来判空判满

//入队
bool enqueue(int value){
    int nextIndex=(rearIndex+1)%capacity;
    if(nextIndex == frontIndex) return false;
    queue[rearIndex]=value;
    rearIndex=nextIndex;
    return true;
}

//出队
bool dequeue(){
    if(frontIndex == rearIndex) return false;
    frontIndex=(frontIndex+1)%capacity;
    return true;
}

//取队头元素（不弹出）
int getFront(){
    return queue[frontIndex];
}

//判空
bool isEmpty(){
    return rearIndex == frontIndex;
}

//判满
bool isFull(){
    return (rearIndex+1)%capacity == frontIndex;
}
//当前队列元素个数
int size(){
    return (rearIndex-frontIndex+capacity)%capacity;
}

int main(){
    cout << "isEmpty: " << isEmpty() << endl;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout << "getFront = " << getFront() << endl;
    cout << "size = " << size() << endl;

    dequeue();
    cout << "after dequeue, getFront = " << getFront() << endl;

    while (!isEmpty()) {
        cout << "dequeue: " << getFront() << endl;
        dequeue();
    }

    cout << "isEmpty: " << isEmpty() << endl;
}
