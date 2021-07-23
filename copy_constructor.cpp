#include <iostream>

using namespace std;

class Circle{
  int x, y;

  public:
  Circle(int a, int b){
    x = a;
    y = b;
  }

  Circle(const Circle &c){
    x = c.x;
    y = c.y;
  }
  
  int getX(){
    return x;
  }

  int getY(){
    return y;
  }
};

int main(){

  Circle x(5, 10);
  Circle y = x;

  cout << x.getX() << " " << x.getY() << endl;
  cout << y.getX() << " " << y.getY() << endl;

  return 0;
}