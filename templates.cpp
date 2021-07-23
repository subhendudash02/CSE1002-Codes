#include <bits/stdc++.h>

using namespace std;

template <typename t>

class Calculate{
    protected:
    t x, y;

    public:
    Calculate(t a, t b){
        x = a;
        y = b;
    }
    t add(t x, t y){
        return x + y;
    }
    t diff(t x, t y){
        return x - y;
    }
    void show(){
        cout << add(x, y) << endl;
        cout << diff(x, y) << endl;
    }
};

int main(){

    Calculate <float> c(5.6, 10.5);
    c.show();

    return 0;
}