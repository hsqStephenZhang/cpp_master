#include <iostream>

using namespace std;

/*
cpp的特点

    输入输出流式计算
    命名空间
    const 修饰
    宏
    内联函数
    函数缺省参数
    内部(静态)函数
    指针和引用
    模板
 */


namespace myNameSpace{
    typedef struct {
        int x;
        int y;

    }Point;
}

int main(){
    myNameSpace::Point point;
    point.x=1;
    point.y=2;
}