#include <iostream>
#include <fstream>

using namespace std;

class MyException:public exception
{
    public:
    const char * what()
    {
        return "The divide by zero is not possible";
    }
};
int main()
{
   try
  {
     int a=10,b=0;
     if(b==0)
     {
         MyException e;
         throw e;
     }
     cout<<"Division is: "<<a/b<<endl;
  }

catch (MyException & e)
  {
      cout<<"Exception: " << e.what();
  }
  return 0;
}
