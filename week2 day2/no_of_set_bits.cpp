#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n ;
    int cnt[n];
    cnt[1] = 1;
    for(int i = 2 ; i<=n ;i++){
        if(i%2==0){
            cnt[i] = cnt[(i)/2];
        }   
        else{
            cnt[i] = cnt[(i)/2]+1;
        }
    }

    for(int i = 1 ; i<= n ; i++){
        cout<<cnt[i]<<" ";
    }
    return 0;
}