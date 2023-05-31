#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n;
    int a[n];

    int x  = 0; 
    int  y = 0 ;  
    for(int i = 0 ; i< n ; i++){
        cin>>a[i]; 
    }

    for(int i = 0 ; i< n ; i++){
        x^=(a[i]);
        y^=(i+1);
    }
    cout<<x<<" "<<y<<endl;
    cout<<(x^y)<<endl;
    int x_ans = 0  ;
    int  y_ans=  0 ;
    int setbit = (x^y) & ((x^y)-1);
    for(int i = 0 ; i< n ; i++){
        if((setbit & a[i])   ){
            x_ans^=(a[i]);
        }
        else{
            y_ans^=(a[i]);
        }
    }

    for(int i = 1 ; i<= n ; i++){
         if((setbit & i)  ){
            x_ans^=(i);
        }
        else{
            y_ans^=(i);
        }
    }
       

    cout<<"repEle : "<<x_ans <<endl;
    cout<<"missing : "<< y_ans<<endl;


    return 0;
}