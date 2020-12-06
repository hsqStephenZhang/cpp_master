#include <iostream>
#include <string.h>
using namespace std;


// 无法返回局部变量的引用
int &f(int t){
    t=t+10;
    return t;
}

int g(int t){
    t=t+10;
    return t;
}

void test1(){
    // 定义引用变量时就一定要初始化
    //引用变量中存放的是被引用变量的地址 其本质是指针
    // 在有串接（多级）引用时，都是指向最终被引用的变量
    int x;
    int &y=x;
    int &z=y;

    x=10;
    cout<<z<<endl;
}

void test2(){

    int *x;
    int *&y=x;
    y=(int*)malloc(sizeof(int)*10);
    memset(y,1, sizeof(int)*10);
    y[0]=1;
    for (int i=0;i<10;i++){
        cout<<y[i]<<" ";
    }

    free(y);
}

void test3(){
    // 引用在创建时，必须初始化，即引用到一个有效的对象；
    //指针在定义时，可以不 初始化

    // 指针可以为NULL
    //引用必须与合法的存储单元关联，不存在NULL引用

    // 引用一旦被初始化为指向一个对象，就不能再改变为另
    //一个对象的引用；指针是可变的
    int x=f(20)+f(30);
    int y=g(20)+g(30);

    cout<<x<<" "<<y<<endl;
}


int main(){
//    test1();
//    test2();
//    test3();

    return 0;
}