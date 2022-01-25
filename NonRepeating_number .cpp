#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    // Enter repeated numbers and one number should be non repeating
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
          ans=ans^arr[i];
    }

    cout<<"Non Repeating number is: "<<ans<<endl;
   
    return 0;
}