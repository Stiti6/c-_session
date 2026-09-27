#include<iostream>
using namespace std;
int main(){
    int n, i, isPrime = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(i = 2; i <= n/2; ++i){
        if(n % i == 0){
            isPrime = 0;    
            break;
        }
    }
    if(isPrime == 1)
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    return 0;
}