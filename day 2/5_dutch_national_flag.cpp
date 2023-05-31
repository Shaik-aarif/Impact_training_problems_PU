#include <bits/stdc++.h>
using namespace std;
 
void swap( int *a , int *b ){
    int temp = *a ;
    *a = *b ;
    *b = temp;
}

int main(){
    int  n ; 
    cin>>n ;
    int a[n];

    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }

    int j = -1 ;

    int k = 0 ;
    while(k<3){

    for(int i = n-1; i>=0 ; i--){
        if(a[i] == k){
            j = i;
            break;
        }
    }

    for(int i = j-1 ; i >=0 ; i--){
        if(a[i] > a[j] ){
            swap(&a[i] ,&a[j] );
            j--;
        }
    }
    k++;
    }



    for(int i = 0 ; i< n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}