#include<iostream>
using namespace std;
int main()
{
     char ch;
        cout<<"Enter a character: ";
        cin>>ch;    
        if(ch>=65 && ch<=90){
            cout<<ch<<": is uppercase";

        }

        else {
            cout<<ch<<": is lowercase";
        }
    return 0;
}