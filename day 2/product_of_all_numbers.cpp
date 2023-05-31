#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n  ;
    cin>>n ;
    int a[n];
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    int zc = 0 ; 
    int mainNum ; 
    for(int i = 0 ; i< n ; i++){
            int sum = 0 ;
            int  tempzc = 0 ;
            int tempnum = a[i];
        while(a[i] > 0 ){
            int x = a[i]% 10 ;
            a[i]/=10;
            sum+=x;
            if(x == 0 ){
                tempzc++;
            }
        }
        if(sum > 1){
            mainNum=tempnum;
        }else{
            zc+=tempzc;
        }

    }

    cout<<mainNum;
    for(int i = 0 ; i< zc ; i++)cout<<0;
    return 0;
}