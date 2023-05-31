#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    stack<char> st;

    for(int i = 0 ; i< s.size() ;i++){
        if(s[i] == '('  || s[i] == '{'  || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
            cout<<"Not Valid"<<endl;
            return 0;
            }
            else{
                if(s[i] ==')' && st.top() == '(' || s[i] ==']' && st.top() == '['  || s[i] =='}' && st.top() == '{'){
                st.pop();
                 }
                 else{
            cout<<"Not Valid"<<endl;
                return 0 ;
                 }
            }
        }
        

    }
        if(st.empty()){
            cout<<"Valid"<<endl;
        }
        else{
            cout<<" Not Valid"<<endl;
        }
    return 0;
}