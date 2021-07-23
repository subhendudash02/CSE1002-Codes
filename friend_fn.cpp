#include <bits/stdc++.h>

using namespace std;

class Box{
  float x;

  public:
  void setWidth(float wid){
    x = wid;
  }
  friend void printWidth(Box box){
    cout << "Width: " << box.x << endl;
  }
};

int main(){

  Box b;
  b.setWidth(4.5);
  printWidth(b);
    
  return 0;
}