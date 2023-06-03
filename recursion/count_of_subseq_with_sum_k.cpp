#include <bits/stdc++.h>
using namespace std;

int display(int idx  , vector<int> &ds , int a[] , int n , int k  , int sum ){
    if(idx==n){
        if(sum == k){
        return 1;
        }
        return 0;
    }


    ds.push_back(a[idx]);
    sum+=a[idx];
    int l = display(idx+1 , ds ,a , n , k  , sum);
    sum-=a[idx];
    ds.pop_back();
    int r = display(idx+1 , ds ,a , n , k  , sum);
    return l+r;
}

int main(){
    int  n ;
    cin>>n ;
    int a[n];
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    int k ;
    cin>> k ;
    vector<int>ds;
    cout<<display(0 , ds , a , n , k , 0);

    return 0;
}