#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string name;
    int age;
    
    cout << "Enter your name and age: " << endl;
    cin >> name >> age;

    ofstream myfile("demo.txt", ios::app);
    //myfile.open("demo.txt");
    myfile << name << endl;
    myfile << age << endl;
    myfile.close();
    cout << "Over" << endl << endl;

    cout << "Reading Operation" << endl;
    char name1[100];
    ifstream obj("demo.txt");
    obj >> name1;
    cout << "String content: " << name1 << endl;
    cout << "Over" << endl << endl;
    obj.close();

    return 0;
}