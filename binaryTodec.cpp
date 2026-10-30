#include<iostream>
using namespace std;
int binaryTodec(int binarynum){
   int ans=0;
    int pow=1;
    while(binarynum>0){
        int reminder=binarynum%10;

        ans+=reminder*pow;
       binarynum/=10;
       pow*=2;
    }
    return ans; //decimal form
}
int main(){
    int binarynum=101;

cout<< binaryTodec(binarynum) <<endl;
 
    
    return 0;
}