#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Entre a character;";
    cin>>ch;

    if (ch >= 'A' and ch <= 'Z'){
        cout<<"Upper case alphabet";
    }
    else if (ch >= 'a' and ch <= 'z'){
        cout<<"Lower case alphabet";
    }
    else if ( ch >= '0' and ch <= '9'){
        cout<<"digit";
    }
    else{
        cout<<"specialized symbol";
    }
}