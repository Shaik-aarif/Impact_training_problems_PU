#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int  n ; 
    cin>>n ;
    int a[n];

    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }

    map<int ,  int > mp;

    for(int i = 0;  i< n ; i++){
        // mp[a[i]]++;
        mp[a[i]] =  mp[a[i]]+1;
    }
     int maxFreq = 0 ;
     int majEle ;
    for(auto   x : mp ){
        if(x.second  > maxFreq){
            maxFreq = x.second;
            majEle = x.first;
        }
    }

    cout<<majEle<<" "<<maxFreq<<endl;
    return 0;
}