#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    int k ;
    cin>>k;
    int left = 0 , right = 0 ;
    int maxLen = 0 ;
    int sum = a[0];
    while(right < n ){

    while(  left  <= right && sum > k){
        sum-=a[left];
        left++;
    }

    if(sum == k){
        maxLen = max(maxLen , right-left+1);
    }
    
    right++;
    if(right < n ){
    sum+=a[right];
    }


    }

    cout<<maxLen<<endl;


    return 0;
}