#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int  n ; 
    cin>>n ;
    int a[n];

    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }

    int cnt = 0 ;
    int ele;

    for(int i = 0 ; i< n; i++){
        if(cnt == 0 ){
            cnt = 1;
            ele = a[i];
        }
        else if (a[i] == ele ){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int maxFreq = 0;
    for(int i = 0  ; i< n ; i++){
        if(a[i] == ele){
            maxFreq++;
        }
    }

    if( maxFreq > floor(n/2)){
        cout<<ele << " " <<maxFreq <<endl;
    }
    else{
        cout<<-1<<endl;
    }


    return 0;
}