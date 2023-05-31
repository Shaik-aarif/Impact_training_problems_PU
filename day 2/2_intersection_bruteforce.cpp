#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n1 , n2 ;
    cin>>n1 >> n2 ;

    int a[n1];
    int b[n2];
    int visited[n2] = {0};

    for(int i = 0 ; i< n1 ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i< n2 ; i++){
        cin>>b[i];
    }

    vector<int> inter;

    

    for( int i = 0 ; i< n1 ; i++){
        for(int j = 0 ; j < n2 ; j++){
            if( a[i] == b[j] && visited[j] == 0){
                inter.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            if(b[j] > a[i])break;
        }
    }

    for(auto x : inter){
        cout<<x<<" ";
    }
    
    return 0;
}