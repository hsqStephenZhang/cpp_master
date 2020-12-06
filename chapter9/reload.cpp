#include <iostream>

using namespace std;

namespace test{

    class vector{
    private:
        int x;
        int y;
    public:

        explicit vector(int x):vector(x,0){

        }
        explicit vector():vector(0,0){

        }
        vector(int x,int y){
            this->x=x;
            this->y=y;
        }

        friend ostream &operator<<(ostream &output,vector &v){
            output<<"x:"<<v.x<<",y:"<<v.y<<endl;
            return output;
        }


        friend istream &operator>>(istream &input,vector &v){
            input>>v.x>>v.y;
            return input;
        }
    };
}

void test1(){
    test::vector v1;
    cin>>v1;
    cout<<v1;
}

int main(){
    test1();
    return 0;
}