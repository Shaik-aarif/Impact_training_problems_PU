#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }

    int left_mini = INT_MAX;
    int right_mini = INT_MAX;
    int sum = 0 ;

    for(int i = 0 ; i<n ; i++){
        for(int j = i ; j< n ;j++){
            right_mini = min(right_mini ,a[j]);
        }
        for(int j = i ; j>=0  ; j--){
            left_mini= min(left_mini , a[j]);
        }
    }

    return 0;
}