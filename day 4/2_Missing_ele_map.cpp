#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n;
    int a[n];
    int sum = 0 ;
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
        sum+=a[i];
    }

    int rsum = (n*(n+1))/2;

    map<int,int>mp;

    for(int i = 0 ; i< n ; i++){
        mp[a[i]]++;
    }
    int repEle;
    for(auto x : mp){
        if(x.second > 1){
            repEle = x.first;
        }
    }


    cout<<"repEle : "<< repEle<<endl;
    cout<<"missing : "<< rsum - (sum - repEle)<<endl;




    

    return 0;
}