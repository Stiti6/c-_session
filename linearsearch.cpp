#include<iostream>
using namespace std;

/*void changeArr(int arr[],int size){
    cout<<"in function\n";
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}*/


int LinearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]== target){
            return i;
        }

    }
    return -1;
}

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int target = 90;
    cout<<LinearSearch(arr,size,target)<<endl;
return 0;
}