#include <bits/stdc++.h>

using namespace std;

auto add(int x, int y){
  auto z = x + y;
  return z;
}

int main(){

  auto x = 5.8;
  auto p = &x;
  cout << typeid(p).name() << endl;

  cout << add(1, 2) << endl;

  auto &k = x;
  cout << k << endl;
  k = 5.6;
  cout << x << endl;
  x = 6.3;
  cout << k << endl;

  return 0;
}