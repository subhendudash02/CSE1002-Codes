#include <bits/stdc++.h>

using namespace std;

class Test{
  int a;
  public:
  Test(){
    a = 0;
    cout << "Constructor called: " << a << endl;
  }
  ~Test(){
    cout << "Object destroyed";
  }
};

int main(){

  static Test t;
  cout << "End" << endl;  

  return 0;
}