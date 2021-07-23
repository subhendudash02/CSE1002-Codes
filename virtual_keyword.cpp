#include <bits/stdc++.h>

using namespace std;

class Base{
    public:
    virtual void show(){
        cout << "In base" << endl;
    }
};

class drv : public Base{
    public:
    void show(){
        cout << "In derived" << endl;
    }
};

class drv1 : public drv{
    public:
    void show(){
        cout << "In another derived" << endl;
    }
};

int main(){

    Base *p;
    Base b;
    drv d;
    drv1 d1;
    p = &b;
    p->show();
    p = &d;
    p->show();
    p = &d1;
    p->show();

    return 0;
}