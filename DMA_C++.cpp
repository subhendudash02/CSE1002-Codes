#include <bits/stdc++.h>

using namespace std;

class MyArray{
    int *p;
    int n, sum;

    public:
    MyArray(){
        cin >> n;
        p = new int[n];
        if (p == 0){
            cout << "Insuffient memory" << endl;
            exit(0);
        }
        sum = 0;
    }

    void get(){
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
    }

    void calculate(){
        for (int i = 0; i < n; i++){
            sum += p[i];
        }
    }

    void show(){
        for (int i = 0; i < n; i++){
            cout << p[i] << endl;
        }
        cout << "Sum: " << sum;
    }

    ~MyArray(){
        delete[] p;
    }
};

int main(){

    MyArray *p = new MyArray[3];

    for (int i = 0; i < 3; i++){
        p[i].get();
        p[i].calculate();
        p[i].show();
    }

    return 0;
}