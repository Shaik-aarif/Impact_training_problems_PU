#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int  n ; 
    cin>>n ;
    int a[n];

    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }

    // int max = 0 ;
    //     int l  , r = -1;
    //     int sum  = 0 ;
    // for(int i = 0 ; i< n ; i++ ){
    //     for(int j = i ; j< n ; j++){
    //         sum+= a[j];
    //         if(sum > max){
    //             max = sum;
    //             l = i ;
    //             r = j ;

    //         }
    //     }
    //     sum = 0 ;
    // }

    // cout<<max<<endl;
    // cout<<l<<" "<<r<<endl;








    // cout<<sum1<<endl;


// class

    int sum1  = 0 ;
    int sum2  = 0 ;
    int s , e ;
    for(int i = 0 ; i< n ; i++){
        sum1+=a[i];
        if(sum1 < 0 ){
            sum1 = 0;
            s = i+1;
        }
        if (sum1> sum2){
            sum2 = sum1;
            e = i;
        }
    }
    cout<<s << " "<<e;


    

    return 0;
}