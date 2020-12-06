//
// Created by root on 12/6/20.
//

#ifndef CPP_MASTER_ARRAY_H
#define CPP_MASTER_ARRAY_H

#include <iostream>
#include <ostream>
#include <istream>

using std::ostream ;
using std::istream ;
using std::cout ;
using std::endl ;

class Array {
private:
    int x;
    int y;
    int *arr;
public:
    Array(){
        x=0;
        y=0;
        arr=new int [10];
    }
    Array(int x,int y){
       this->x=x;
       this->y=y;
       arr=new int[10];
    }

    ~Array(){
        if(arr!= nullptr){
            delete []arr;
            arr= nullptr;
        }
    }

    friend ostream &operator<<(ostream &output,Array &array){
        output<<"x:"<<array.x<<",y:"<<array.y<<endl;
        if(array.arr!=nullptr){
            output<<"arr:";
            for (int i = 0; i < 10; ++i) {
                cout<<array.arr[i]<<" ";
            }
            output<<endl;
        }
        return output;
    }

    friend istream &operator>>(istream& input,Array &array){
        input>>array.x>>array.y;
        for (int i = 0; i < 10; ++i) {
            input>>array.arr[i];
        }
    }

};


#endif //CPP_MASTER_ARRAY_H
