// bit manipulation
#include<bits/stdc++.h>
using namespace std;

// function to check whether number is even or odd
bool check(int n){
    return (n&1);
}
int main(){
    // If number is even then this will print 0 and if number is odd then it will print 1
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool output=check(n);
    if (output==1){
        cout<<"Number is odd"<<endl;
    }
    else{
        cout<<"Number is even"<<endl;
    }
    return 0;
}