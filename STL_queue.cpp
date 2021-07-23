#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main()
{
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}
