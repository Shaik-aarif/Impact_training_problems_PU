#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int m ;
    int n ;
    cin>>m ;
    cin>>n ;
    int a[m][n];
    for(int i = 0 ; i< m ; i++){
        for(int j = 0 ; j< n ; j++ ){
        cin>>a[i][j];
        }
    }

    vector<int>ans;


    int top = 0 , bottom = m-1;
    int left = 0 , right = n-1;

    while(top<=bottom && left <=right){

    // right
    for(int i = left ; i<=right ; i++){
        ans.push_back(a[top][i]);
    }
    top++;
    // bottom
    for(int i = top ; i<=bottom ; i++){
        ans.push_back(a[i][right]);
    }
    right--;
    // left
    if(top<=bottom){
    for(int i = right ; i>=left ; i--){
        ans.push_back(a[bottom][i]);
    }
    bottom--;
    }
    // top
    if(left<=right){

    for(int i = bottom ; i>=top ; i--){
        ans.push_back(a[i][left]);
    }
    left++;
    }
    }

    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}