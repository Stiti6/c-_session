#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={8,15,2,30,87,67};
    int n=6;
    int maxIndex=0;
    int minIndex=0;
    for(int i=1; i<n;i++){
        if(arr[i]>arr[maxIndex]){
            maxIndex=i;

        }
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
        if(arr[i]<arr[minIndex]){
            minIndex=i;
                }
    }
    cout<<"MAXIMUM ELEMENT IS:"<<arr[maxIndex]<<endl;
        cout<<"MINIMUM ELEMENT IS:"<<arr[minIndex]<<endl;
return 0;
}