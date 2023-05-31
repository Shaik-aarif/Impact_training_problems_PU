#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n;
    int a[n];
    int lmax[n];
    int rmax[n];
    int max = INT_MIN;
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i< n ; i++){
        if(a[i]>max){
            max = a[i];
        }
        lmax[i] = max;
    }
    for(int i = 0 ; i< n ; i++){
        if(a[i]>max){
            max = a[i];
        }
        lmax[i] = max;
    }


    return 0;
}