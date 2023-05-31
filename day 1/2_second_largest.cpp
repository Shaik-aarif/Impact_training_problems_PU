#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n  ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i< n; i++){
        cin>>a[i];
    }

    int max = a[0];
    int smax = -1;

    for(int i = 0 ; i< n ; i++){
        if(a[i]>max ){
            smax = max;
            max=a[i];
            
        }
        if(a[i] > smax  && a[i] < max){
            smax = a[i];
        }
    }



    cout<<max<<endl;
    cout<<smax<<endl;
    return 0;
}