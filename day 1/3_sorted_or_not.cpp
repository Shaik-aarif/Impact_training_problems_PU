#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n  , a[n];
    cin>>n;
    for(int i = 0 ; i< n; i++){
        cin>>a[i];
    }
    int sorted  = 1 ;
    for(int i = 0 ; i<n-1 ; i++){
    if(a[i+1] < a[i]){
        sorted = 0;
    }
    }

    sorted == 0 ?  cout<<"Not sorted"<<endl :cout<<"sorted"<<endl ; 
    
    return 0;
}