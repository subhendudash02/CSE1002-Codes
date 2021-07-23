#include <iostream>

using namespace std;

int main(){

    try{
        int x, y;
        cin >> x >> y;

        if (y == 0){
            throw -99;
        }
        else{
            cout << x / y << endl;
        }
    }

    catch(...){
        cout << "DivisionByZeroError" << endl;
    }

    return 0;
}