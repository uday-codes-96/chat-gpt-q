#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre a year;";
    cin>>n;


    if ((n % 400 == 0) || (n % 4 == 0 and n % 100 !=0)){
        cout<<"Leap year";
    }
    else {
        cout<<"Non leap year";
    }
        
}
