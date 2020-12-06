#include <iostream>
#include <string>
#include <string.h>
using namespace std;

void test1(){
    int x=10;
    int a[3]={20,30,40};
    int y=50;
    cout<<x<<" "<<y<<" "<<endl;
    // 访问数组下标越界，第一种
    a[-1]=3;
    a[3]=70;
    cout<<x<<" "<<y<<" "<<endl;
}

void test2(){
    char s1[20];
    char s2[12];
    strcpy(s2, "0123456789a");
    cout<<s2<<endl;

    s2[11]='b';
    strcpy(s1,"language");
    cout<<s2<<endl;
}

void test3(){
    /*
    变量的三个属性：
    1.数据类型
    2.地址
    3.单元的内容

    知道了这三个内容，就可以唯一确定一个变量的作用
     */


    int x;
    int y[4]={1,2,3,4};
    int *p;
    for (int i = 0; i < sizeof(y)/ sizeof(int); ++i) {
        p=y+i;
        printf("%p\t",p);
    }
    cout<<endl;

    // 每一个数组的元素，都是指向int类型的指针
    int z[4][4];
    int *q[4];
    for (int j = 0; j < 4; ++j) {
        q[j]=z[j];
        printf("%p\t",q[j]);
    }
}

void test4(){
    char *p,*q;
    p= static_cast<char *>(malloc(100));
    q=p;
    if(p!= nullptr){
        free(p);
    }
    // free(): double free detected
    // 动态分配的指针，可能存在空间已经被释放，再free就会报错
    if(q!=nullptr){
        free(q);
    }
}


int main(){
//    test1();
//    test2();
//    test3();
    test4();
    return 0;
}

