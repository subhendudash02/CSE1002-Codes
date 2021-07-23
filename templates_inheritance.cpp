#include <bits/stdc++.h>

using namespace std;

template <typename t>

class Base{
    protected:
    int a;
    
    public:
    void set(t x){
        a = x;
    }
    void show(){
        cout << "In base: " << a << endl;
    }
};

template <typename t, typename t2>

class Derived: public Base <int>{
    int b;
    
    public:
    void set(t x){
        b = x;
        // Base<int>::a = x;
    }
    void show(){
        cout << "In derived: " << b << endl;
    }
};

int main(){

    Derived <int, int> d;
    d.set(5);
    d.show();
    d.Base<int>::set(10);
    d.Base<int>::show();

    return 0;
}