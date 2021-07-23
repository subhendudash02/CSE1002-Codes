#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> li{4, 5, 3, 1, 2};
    list<int>::iterator ii = li.begin();

    /* while (ii != li.end()){
        cout << *ii << endl;
        ii++;
    } */

    //li.sort();
    //li.reverse();
    ii = li.begin();
    
    while (ii != li.end()){
        cout << *ii << endl;
        ii++;
    }

    cout << "Size: " << li.size() << endl;

    li.push_back(30);
    li.push_front(50);

    ii = li.begin();
    
    while (ii != li.end()){
        cout << *ii << endl;
        ii++;
    }

    return 0;
}