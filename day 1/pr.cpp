#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int  n ; 
    cin>>n ;
    int a[n];

    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    int esum = 0 , osum = 0; 
    
    for(int i = 0  ; i< n ; i++){
        
    }
    
    for(int i = 0 ; i< n ; i++){
        if(i%2 == 0){
            esum+=a[i];
        }
        else{
            osum+=a[i];
        }
   }



    return 0;
}