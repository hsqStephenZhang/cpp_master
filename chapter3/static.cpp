#include <iostream>

using namespace std;

void f(){
//    静态变量和非静态变量，指的是生命周期，并不是作用域，静态变量也可能是局部变量，但是仍然是等到程序结束之后才会回收
//    全局变量也是静态存储，它的作用域是整个程序

/*
    静态局部变量 VS 局部变量 作用域
    静态全局变量 VS 全局变量 生命周期
 */
    static int x=0;
    x++;
    cout<<x<<endl;
}

void g(){
    int x=0;
    x++;
    cout<<x<<endl;
}

void test1(){
    f();f();f();
    g();g();g();
}

int main(){

}