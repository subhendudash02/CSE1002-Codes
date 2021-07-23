#include <bits/stdc++.h>

using namespace std;

class base{
    public:
    void f1(){
        cout << "F1-Base" << endl;
    }
    virtual void f2(){
        cout << "F2-Base" << endl;
    }
    virtual void f3(){
        cout << "F3-Base" << endl;
    }
    virtual void f4(){
        cout << "F4-Base" << endl;
    }
};

class derived: public base{
    public:
    void f1(){
        cout << "F1-Derived" << endl;
    }
    void f2(){
        cout << "F2-Derived" << endl;
    }
    void f4(int x){
        cout << "F4-Derived" << endl;
    }
};

int main(){

    base *x;
    derived y;
    x = &y;

    x->f1();
    x->f2();
    x->f3();
    x->f4();

    return 0;
}