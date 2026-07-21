#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Entre the values of a,b,c";
    cin>>a>>b>>c;

    if (a >= b and a >= c){
        cout<<"the max value is "<<a;
    }
    else if (b >= a and b >= c){
        cout<<"the max value is "<<b;
    }
    else{
        cout<<"the max value is "<<c;
    }
}