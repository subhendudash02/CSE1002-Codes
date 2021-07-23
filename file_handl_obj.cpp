#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student{
    int id;
    char str[40];

    public:
    void get(){
        cout << "Enter id and name: " << endl;
        cin >> id;
        cin.getline(str, 30);
    }
    void show(){
        cout << id << " " << str << endl;
    }

    void enq(){
        Student S;
        int id, found = 0;
        ifstream ff("demo2.exe");
        
        cout << "Enter student id: " << endl;
        cin >> id;

        ff.read((char*) &S, sizeof(S));

        while (!ff.eof()){
            if (S.id == id){
                cout << "Found" << endl;
                found = 1;
                break;
            }
            ff.read((char *) &S, sizeof(S));
        }

        ff.close();
        
        if (found == 0){
            cout << "Not found" << endl;
        }
    }
};

int main(){

    Student S;
    ofstream file;
    file.open("demo2.txt");
    
    char x;

    while (x == 'Y' || x == 'N'){
        S.get();
        file.write((char*) &S, sizeof(S));
        cout << "One record added" << endl;
        cout << "Continue(Y/N)?" << endl;
        cin >> x;
    }
    file.close();

    ifstream file1("demo2.txt");

    while (!file1.eof()){
        S.show();
        file1.read((char*) &S, sizeof(S));
    }
    file1.close();

    S.enq();

    return 0;
}