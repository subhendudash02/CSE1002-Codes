#include <bits/stdc++.h>

using namespace std;

class Demo{
  int a;
  static int b;

  public:
  Demo(int x, int y){
    a = x;
    b = y;
  }

  void show(){
    cout << a << " " << b << endl;
  }

  static void inc(){
    b++;
    cout << b << endl;
  }

};

int Demo::b;

int main(){

  Demo d(4, 5);
  d.show();
  Demo::inc();

  return 0;
}