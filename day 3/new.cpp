// inversion count of an array
// inv cnt = how far the array is from being sorted



#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int inv_cnt = 0 ;
//  brute force 
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(a[i] > a[j]){
                inv_cnt++;
            }
        }
    }

    // for(int i = n-1 ; i> 0 ; i--){
    //     if(a[i-1] > a[i]){
    //         inv_cnt+=(n-i);
    //     }
    // }
    cout<<inv_cnt<<endl;
    return 0;
}

