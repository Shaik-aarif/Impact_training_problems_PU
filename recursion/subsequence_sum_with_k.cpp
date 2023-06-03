#include <bits/stdc++.h>
using namespace std;

void display(int idx  , vector<int> &ds , int a[] , int n , int k  , int sum ){
    if(idx==n){
        if(sum == k){

        for(auto x : ds){
            cout<<x<<" ";
        }
        if(ds.size() == 0){
            cout<<"[]";
        }
        cout<<endl; 
        }
        return;
    }

    ds.push_back(a[idx]);
    sum+=a[idx];
    display(idx+1 , ds ,a , n , k  , sum);
    sum-=a[idx];
    ds.pop_back();
    display(idx+1 , ds ,a , n , k  , sum);

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
    display(0 , ds , a , n , k , 0);

    return 0;
}