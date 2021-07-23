#include <iostream>
#include <stack>

using namespace std;

int main()
{
   stack<int> st;
   st.push(21);
   st.push(22);
   st.push(23);
   st.push(24);
   cout<<"stack size: "<<st.size()<<endl;
   cout<<" "<<st.top()<<endl;

   while(!st.empty())
   {
       cout<<" "<<st.top()<<endl;
       st.pop();
   }
   
    return 0;
}
