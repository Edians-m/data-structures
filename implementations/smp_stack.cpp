#include <iostream>
using namespace std;

int stackData[100];
int topIndex = -1;                // 栈顶指针，-1 表示栈里没有元素
const int CAPACITY = 100;        // 栈的最大容量

//入栈
bool push(int value){
    if(topIndex == CAPACITY-1) return false;
    stackData[++topIndex]=value;
    return true;
}

//出栈
bool pop(){
    if(topIndex == -1) return false;
    --topIndex;
    return true;
}

//获取栈顶元素（不弹出）
int top() {
    return stackData[topIndex];
}

//判空
bool isEmpty() {
    return topIndex == -1;
}

//判满
bool isFull() {
    return topIndex == CAPACITY-1;
}

//获取当前栈中的元素个数
int size() {
    return topIndex+1;
}

//测试
int main(){
    cout << "isEmpty: " << isEmpty() << endl;

    push(10);
    push(20);
    push(30);
    cout << "top = " << top() << endl;
    cout << "size = " << size() << endl;

    pop();
    cout << "after pop, top = " << top() << endl;
    
    while (!isEmpty()) {
        cout << "pop: " << top() << endl;
        pop();
    }

    cout << "isEmpty: " << isEmpty() << endl;
}
