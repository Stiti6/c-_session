#include<iostream>
#include<climits>
using namespace std;
int main(){
     int size;

    cout << "Enter array size: ";
    cin >> size;

    int nums[100];

    cout << "Enter array elements: ";
    int smaller=INT_MAX;
    int greater=INT_MIN;
    for(int i=0; i<size; i++){
        cin >> nums[i];
        if(nums[i]< smaller){
            smaller=nums[i];
        }
        if(nums[i]> greater){
            greater=nums[i];
        }
    }

    cout << "The smallest number is: "<<smaller<< endl;
    cout << "The greatest number is: "<<greater<< endl;


    return 0;
}