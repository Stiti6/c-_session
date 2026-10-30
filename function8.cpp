#include<iostream>
    using namespace std;
int sumofdigits(int num)
{
    int digsum=0;

while(num>0){
    int lastdig=num%10;
    num=num/10;
    digsum=digsum+lastdig;
    

}
return digsum;

}
int main(){
  cout<< "Sum of digits: "<< sumofdigits(2345)<<endl;
  
    
    return 0;
}
