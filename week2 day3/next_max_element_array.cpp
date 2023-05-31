#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n ;
    int a[n];
    for(int i = 0  ; i<n ; i++){
        cin>>a[i];
    }
    int curr_max = INT_MIN;
    int b[n];
    b[n-1] = -1;
    for(int i = n-2 ; i>=0 ;i--){
        if(a[i]<a[i+1]){
            b[i] = a[i+1];
            curr_max = a[i+1];
        }
        else{
            b[i] = curr_max;
        }
    }

    for(int i = 0 ; i< n ; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}