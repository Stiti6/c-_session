#include<iostream>
using namespace std;
int main(){
    int n=10;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        if (i==5){
            break;
        }
    }
cout<<"sum of the number is:"<<sum;
    return 0;

}