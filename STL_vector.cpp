#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v1;

    for (int j = 1; j <= 5; j++){
        v1.push_back(j);
    }
        
    for (auto i = v1.begin(); i != v1.end(); ++i){
            cout << *i << endl;
    }

    cout << v1[1] << endl;

    cout << "Capacity: " << v1.capacity() << endl;

    vector<int> v2(4, 10);

    for (int i = 0; i < 6; i++){
        cout << v2[i] << endl;
    }

    cout << "Capacity: " << v2.capacity() << endl;

    v2.push_back(20);

    for (int i = 0; i < 6; i++){
        cout << v2[i] << endl;
    }

    cout << "Size: " << v2.size() << endl;

    v2.pop_back();

    cout << "Size: " << v2.size() << endl;

    //v2.clear();

    //cout << "Size: " << v2.size() << endl;
    //cout << "Capacity: " << v2.capacity() << endl;

    cout << v1.front() << " " << v1.back() << endl;
    cout << v1.at(2) << endl;

    /* vector<int> v3;
    vector<int>::iterator ii = v3.begin();
    v3.insert(ii + 1, 5);

    while (ii != v3.end()){
        cout << *ii << endl;
        ii++;
    } */
 
    return 0;

}