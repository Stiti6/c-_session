#include<iostream>
    using namespace std;
int sum(int a,int b)
{
    int s=a+b;
    return s;
}
int minOfTwo(int a, int b) {
    if(a<b){
return a;

    }
    else{
        return b;
    }
}

int main(){
  cout<<"min=" << minOfTwo(1,9) <<endl;
  
    
    return 0;
}