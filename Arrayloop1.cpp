#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[]={5,15,22,1,-15,24};
    int size=6;
    int greater=INT_MIN;
    for(int i=0; i<size; i++){
        if(nums[i]> greater){
            greater=nums[i];
        }
    }

    cout << "The greater number is: "<<greater<< endl;


    return 0;
}