#include <iostream>
#include "Array.h"

using namespace std;

void test1(){
    Array *pArray;
    pArray=new Array[10];
    for (int i = 0; i < 10; ++i) {
        cout<<pArray[i]<<endl;
    }

    cin>>pArray[0];
    cout<<pArray[0];
}

int main(){
    test1();
    return 0;
}