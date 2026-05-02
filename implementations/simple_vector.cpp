#include <iostream>
using namespace std;

struct vector{
    int* data;
    int size;
    int capacity;
};

//初始化
void init(vector& a,int cap=2){
    a.data=new int[cap];
    a.size=0;
    a.capacity=cap;
}

//回收内存
void distroy(){
    delete[] a.data;
    a.size=0;
    a.capacity=0;
}

//尾部添加元素

//删除尾部元素

//返回元素个数

//返回当前元素

//通过索引访问（可修改）

//通过索引访问（不可修改）

//预留容量

//改变元素个数

int main(){
  
}
