#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n ;
    cin>> n ;
    int a[n];
    int b[n];

    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i< n ; i++){
        cin>>b[i];
    }

    int i = 0 ;
    int  j = 0 ;
    vector<int>ans;
    ans.push_back(-1);
    while(i<n && j<n ){
    //    if(a[i] < b[j]  && a[i] != ans.back()){
    //     ans.push_back(a[i]);
    //     i++;
    //    }else{
    //     i++;
    //    }

            if(a[i] < b[j]){
                if(a[i] != ans.back()){
                    ans.push_back(a[i]);
                    i++;
                }
                else{
                    i++;
                }
            }
            if(b[j] < a[i]){
                if(b[j] != ans.back()){
                    ans.push_back(b[j]);
                    j++;
                }
                else{
                    j++;
                }
            }

            if(a[i] == b[j]){
                if(a[i] != ans.back()){
                    ans.push_back(a[i]);
                    i++;
                    j++;
                }
                else{
                    i++;
                    j++;
                }
            }
      
    }

    while(i<n){
        if(a[i] != ans.back()){
            ans.push_back(a[i]);
            i++;
        }
    }
    while(j<n){
        if(b[j] != ans.back()){
            ans.push_back(b[j]);
            j++;
        }
    }


   for(int  i = 1 ; i< ans.size() ; i++){
    cout<<ans[i]<<" ";
   }


    return 0;
}