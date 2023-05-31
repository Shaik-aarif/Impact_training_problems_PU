#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n  ;
    cin>>n ;
    int a[n];
    
    int zc = 0 ; 
    int mainNum ; 
    for(int i = 0 ; i< n ; i++){
        int x ; 
        cin>>x;
        int sum = 0 ;
        int  tempzc = 0 ;
        tempnum = x;
        while(){
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