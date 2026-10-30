#include<iostream>
    using namespace std;
int printHello(){
    cout<<"hello\n";
    return 3;
}

int main(){
    int val = printHello();
    cout<<"value="<< val <<endl;//another way we can write like this:cout<< printHello()<<endl;
    
    
    return 0;
}