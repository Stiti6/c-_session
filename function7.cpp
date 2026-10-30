#include<iostream>
    using namespace std;
int sum(int a,  int b)
{
 a=10+a;
 b=10+b;

return a+b;
}
int main(){
    int a=5,b=4;

  cout<< sum(a,b)<<endl;
  cout<< a<<endl;
    cout<< b<<endl;

  return 0;
}
