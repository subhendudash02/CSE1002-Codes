#include <bits/stdc++.h>

using namespace std;

class Box{
    protected:
    int l, b, h;

    public:
    void get(){
        cin >> l >> b >> h;
    }
    void show(){
        cout << l << " " << b << " " << h << endl;
    }

};

class Carton: public Box{
    string material;

    public:
    void set(){
        cout << "Enter material: ";
        cin >> material;
    }
    void display(){
        cout << material << endl;
    }
    void volume(){
        cout << l * b * h << endl;
    }
}; 

int main(){

    Carton x;
    x.get();
    x.set();
    x.show();
    x.display();
    x.volume();

    return 0;
}