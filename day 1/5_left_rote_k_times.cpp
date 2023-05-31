#include <bits/stdc++.h>
using namespace std;

void swap( int *a , int *b ){
    int temp = *a ;
    *a = *b ;
    *b = temp;
}
void rev_arr(int *a , int l , int r){

    while(r>l){
        swap(&a[l] , &a[r]);
        l++;
        r--;
    }
}
int main(){
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }

    int k ;
    cin>>k;

    k%=n;

    

    rev_arr(a , 0  , k-1);
    rev_arr(a , k  , n-1);
    rev_arr(a , 0  , n-1);


    for(int i = 0 ; i< n ; i++){
        cout<<a[i]<<" ";
    }

    

    


    return 0;
}