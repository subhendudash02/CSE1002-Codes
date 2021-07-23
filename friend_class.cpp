#include <iostream>

using namespace std;

class Moisture{
    int humid;
    
    public:
    Moisture(){
        cin >> humid;
    }
    friend class Rain;
};

class Rain{
    int temp;
    
    public:
    Rain(){
        cin >> temp;
    }
    void compare(Moisture m){
        if (temp >= 30 && m.humid >= 50){
            cout << "It will rain" << endl;
        }
        else{
            cout << "It will not rain" << endl;
        }
    }
};

int main(){
    
    Moisture a;
    Rain b;
    b.compare(a);
    
    return 0;
}