#include <bits/stdc++.h>

using namespace std;

class Student{
  int roll;
  string grade;
  float per;

  public:
  Student(int r, string g, float p){
    this->roll = r;
    this->grade = g;
    this->per = p;
  }

  Student(Student &S){
    *this = S;
  }

  void get(){
    cout << "Address: " << this << endl;
    //cout << this->roll << " " << this->grade << " "<< this->per << endl;
  }

  void show(){
    //cout << roll << " " << grade << " " << per << endl;
    cout << this->roll << " " << this->grade << " "<< this->per << endl;
  }

};

int main(){

  Student S(3, "A", 45.56);
  Student G = S;
  
  S.get();
  S.show();
  G.get();
  G.show();

  return 0;
}