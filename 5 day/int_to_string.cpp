#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int num ;
    cin>>num;
    int i = 0 ;
    string s = "";
    
    while(num> 0 ){

        if(num%26 ==  0){
            s += 'Z' ;
        }
        else{
            s += (num%26)+64;
        }
        num/=26;
    }
    for(int i = s.size()-1 ; i>=0 ; i--){
        cout<<s[i];
    }
    return 0;
}

