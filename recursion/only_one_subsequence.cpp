#include <bits/stdc++.h>
using namespace std;

bool display(int idx  , vector<int> &ds , int a[] , int n , int k  , int sum ){
    if(idx==n){
        if(sum == k){

        for(auto x : ds){
            cout<<x<<" ";
        }
        if(ds.size() == 0){
            cout<<"[]";
        }
        cout<<endl;
        return true; 
        }
        return false;;
    }

    sum+=a[idx];
    ds.push_back(a[idx]);
    if(display(idx+1 , ds ,a , n , k  , sum) == true)return true;
    sum-=a[idx];
    ds.pop_back();
    if(display(idx+1 , ds ,a , n , k  , sum) == true)return true;

    return false;

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