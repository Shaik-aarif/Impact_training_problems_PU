#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int target ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin>>target ;

    map<int , int> mp;
    for(int i = 0 ; i< n ; i++){
    int remNeeded = target-a[i];
        if(mp.find(remNeeded) != mp.end()){
            // cout<<"yes"<<endl;

            cout<<mp[remNeeded] << " "<< i; 
            return 0 ;
        }
        mp[a[i]] = i ;
    }
    cout<<"no"<<endl;
    return 0;
}