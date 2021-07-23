#include <iostream>

using namespace std;

void divide(int x, int y){
    try{
        if (y == 0){
            throw y;
        }
        else{
            cout << x / y << endl;
        }
    }
    catch(...){
        throw;
    }
}

int main(){

    try{
        divide(10, 5);
        divide(10, 0);
    }
    catch(int){
        cout << "In main: Division by 0" << endl;
    }

    return 0;
}