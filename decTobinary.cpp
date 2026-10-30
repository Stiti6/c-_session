#include<iostream>
using namespace std;
int decTobinary(int decnum){
   int ans=0;
    int pow=1;
    while(decnum>0){
        int reminder=decnum%2;
        decnum=decnum/2;

        ans+=(reminder*pow);
        pow=pow*10;
    }
    return ans; //binary form
}
int main(){
    int decnum=50;
    //for(int i=1;i<=10; i++){
cout<<decTobinary(decnum)<<endl;
 
   // }
    return 0;
}