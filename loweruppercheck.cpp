#include<iostream>
using namespace std;
    int main(){
        char ch;
        cout<<"Enter a character: ";
        cin>>ch;    
        if(ch>='a' && ch<='z'){
            cout<<ch<<": islowercase";

        }

        else {
            cout<<ch<<": is uppercase";
        }
        return 0;

    }