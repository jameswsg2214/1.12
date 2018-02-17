// Example program
#include <iostream>
#include <string>
using namespace std;
class Hello
{
    public:
 int calc(int a)
 {
     if(a>=1 && a<=10000){
     if(a%2==0)
     {
         cout<<"even";
     }
         else{
             cout<<"odd";
         }
         
     }
     else
     cout<<"its zero or negative";
     return 0;
 }
};
int main()
{
  Hello h;
  int d;
  cout<<"entr the value";
  cin>>d;
  h.calc(d);
  return 0;
}
