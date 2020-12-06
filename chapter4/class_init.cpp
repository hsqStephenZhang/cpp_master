#include <iostream>

using namespace std;

namespace test{
    class A1{
    private:
        // 在定义处初始化，就相当于在所有的输出化函数体前采用相同的方式初始化
        //虽然省事，但是也失去了灵活性
        const int x=10;
        int y;
    public:
        explicit A1(int y){
            this->y=y;
        }

        A1(){
            this->y=1;
        }

        // 函数中不允许修改对象的非静态数据成员
        // 不得调用其他非 const的成员函数

        void test(){
            cout<<"this is test"<<endl;
        }
        int getY() const {
//            test();
            return y;
        }

        friend ostream &operator<<(ostream & output,A1 &a1){
            output<<"x:"<<a1.x<<",y:"<<a1.y;
            return output;
        }
    };

    class A2{
    private:
        const int x;
        int y;
    public:
        explicit A2(int y):x(10){
            this->y=y;
        }

        A2():x(20){
            this->y=1;
        }

        friend ostream &operator<<(ostream & output,A2 &a2){
            output<<"x:"<<a2.x<<",y:"<<a2.y;
            return output;
        }
    };
}

void test1(){
    auto *a1=new test::A1(1);
    auto *a2=new test::A2(2);
    auto *a3=new test::A2();
    cout<<*a1<<endl;
    cout<<*a2<<endl;
    cout<<*a3<<endl;
    delete a1;
    delete a2;
    delete a3;
}

int main(){
    test1();
    return 0;
}