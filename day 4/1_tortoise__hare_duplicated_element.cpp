#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>>n;
    int a[n+1];
    for(int i = 0 ; i< n+1 ; i++){
        cin>>a[i];
    }

    int t  = a[0];
    int h  = a[0];

    do {
        t = a[t];
        h = a[a[h]];
    }while(t!=h);

    t = a[0];
    while(t!=h){
        t= a[t];
        h= a[h];
    }

    cout<<t<<endl;   
    return 0;
}



