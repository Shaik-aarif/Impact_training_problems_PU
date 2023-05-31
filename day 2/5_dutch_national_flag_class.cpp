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

    int l = 0 ;
    int r = n-1;
    int m = 0 ;

    while(m <= r){

        switch (a[m]){
            case 0 : 
                swap(&a[m] , &a[l]);
                m++;l++;
                break;
            case 1 :
                m++;
                break;
            case 2 :
                swap(&a[m] , &a[r]);
                r--;
                break;
        }

    }


    for(int i = 0 ; i< n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}