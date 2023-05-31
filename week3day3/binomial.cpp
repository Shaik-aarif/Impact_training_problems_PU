#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll x , y ;
    cin>>x>>y;
    ll a[y];
    a[0]=1;
    for(ll i =1 ;i<=y ; i++){
        a[i] = x*a[i-1];
    }

    cout<<a[y];

    // cout<<pow(9,10);
    return 0;
}

