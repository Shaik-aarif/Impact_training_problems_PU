#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector<char> letters = {'a','a','c','d','d','d','g','o','o'};
    set<char>s;
    for(auto x : letters){
        s.insert(x);
    }

    for(auto x : s){
        cout<<x<<" ";
    }
    vector<string>words ={"dog","cat","dad","good"};
    vector<int> scores = {1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0};

    map<char,int>mp;
       for(auto x : s){
           mp[x] = scores[x-97];
       }
    cout<<endl;
        for(auto x : mp){
            cout<<x.first<<" "<<x.second <<endl;
        }
        int ans = 0 ;
        int indi_score = 0 ;
        for(auto str : words){
            cout<<str.size();
            for(int i = 0 ; i< str.size() ; i++){
                cout<<str[i];
                indi_score +=mp[str[i]];
            }
            cout<<"score : " << indi_score<<endl;
            ans = max(indi_score , ans);
            indi_score = 0 ;
        }
    return 0;
}