#include <bits/stdc++.h>
using namespace std;

void display(int idx  , vector<int> &ds , int a[] , int n){
    if(idx==n){
        for(auto x : ds){
            cout<<x<<" ";
        }
        if(ds.size() == 0){
            cout<<"[]";
        }
        cout<<endl; 
        return;
    }

    ds.push_back(a[idx]);
    display(idx+1 , ds ,a , n);
    ds.pop_back();
    display(idx+1 , ds ,a , n);

}

int main(){
    int  n ;
    cin>>n ;
    int a[n];
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    vector<int>ds;
    display(0 , ds , a , n);

    return 0;
}