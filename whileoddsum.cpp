#include<iostream>
using namespace std;
int main()
{
    int n=20;
   int sum=0;
   int i=1;

    while(i<n){
    i++;
if (i%2!=0){
    sum=sum+i;

}
}
        cout<<"sum of the odd number is:"<<sum<<endl;


    return 0;

}