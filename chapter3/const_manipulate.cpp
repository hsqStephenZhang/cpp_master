#include <iostream>

using namespace std;

//
void test1(){
    // const float是一种新的数据类型，常量在运行期间不得修改，并且应该在定义的时候初始化
    const float x=1;

    // 普通的float不需要初始化(使用之前还是要初始化)，可以在运行期间修改数据内容
    float y;

    float *q;
    //    q=&x;
    // 无法从const float* 转化为float*，常量的地址，只能赋值给一个常量指针
    // 常量的地址，可以进行强制地址类型转换
    q=&y;
}

void test2(){
    char const *p1;
    const char *p2;
    const char *p3="hello";
    p1="world\n";
    p2="hello,world\n";
}

void test3(){
    /*
    需要区分const修饰的是指针还是指针指向的内容
    区分方法：从右往左读
     char const *p1; 表示p1是一个指针，指向一个char类型的常量
     char * const p1; 表示p1是一个常量，该常量的内容是一个指针，指向一个char类型的变量
     */
    char *p1;
    p1=new char[10];
    char * const p=p1;
    p[0]='a';
    p[1]='b';
}

void test4(){
    /*
     p1 指向字的符串，可以通过 p1 来修改，如 p1[0]=‘H’;
     pc 指向的串，不能通过 pc来修改
     就像一个文件，本身是可以改的， p1 是有 **权限**  修改的人；pc 是无权改的人
     */
    char *p1;
    p1=new char[10];
    const char * pc;
    pc = p1;
}

void test5(){
    char a[]="hello";
    char *p=(char*)"world";
    // 运行期间报错
    p[0]='a';
}

int main(){
    test5();
}