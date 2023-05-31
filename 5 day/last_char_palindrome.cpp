#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s ;
    cin>>s;

    int l = 0 ;
    int r = s.size() - 2 ;

    while(l<r){
        if(s[l] == s[r]){
            l++;
            r--;
        }
        else{
            cout<<"not Palindrome"<<endl;
            return 0 ;
        }
    }
            cout<<" Palindrome"<<endl;

    return 0;
}