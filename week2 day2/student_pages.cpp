#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n ;
    int a[n];
    int sum = 0 ;
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
        sum+=a[i];
    }
    // cout<<sum;
    int lsum = 0 ;
    int rsum =  sum;
    int maxi= INT_MIN;
    int ans=INT_MAX;
    for(int i = 1 ; i< n ; i++){
        lsum+=a[i-1];
        rsum-=a[i-1];
        maxi = max(lsum ,rsum);
        ans = min(maxi,ans);

    }

    cout<<ans<<endl;

    return 0;
}