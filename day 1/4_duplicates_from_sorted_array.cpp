#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int  n ; 
    cin>>n ;
    int a[n];

    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }

    int i = 0 ; 
    for(int j = 1 ; j < n ; j++){
        if(a[j] != a[i]){
            a[i+1] = a[j];
            i++;
        }
    }

    for(int k = 0 ; k<= i ; k++){
        cout<<a[k]<<" ";
    }
    return 0;
}