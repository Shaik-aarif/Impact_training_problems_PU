#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n ;
    int a[n];
    for(int i = 0 ; i< n  ; i++){
        cin>>a[i];
    }
    int l  , r;
    cin>>l>>r;
    vector<int>ans;
    for(int i = 0 ; i< n ; i++){
        if(i <l  || i>r){
            ans.push_back(a[i]);
        }
    }
    for(auto x : ans){
        cout<<x<<" "<<endl;
    }
    return 0;
}