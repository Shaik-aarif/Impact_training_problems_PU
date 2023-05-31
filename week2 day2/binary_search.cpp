#include <bits/stdc++.h>
using namespace std;
 
void bsearch(int a[] , int n , int key){
    int low = 0 ;
    int high = n-1;
    int mid = (low+high)/2;

    while(low<mid){
        if(a[low]== key ){
            cout<<low<<endl;
            return;
            // return true;
        }
        if(a[high] == key){
            cout<<high<<endl;
            return;
        }

        if(a[mid]>key){
            high = mid-1;
        }
        else if(a[mid]<key){
            low  = mid+1;
        }
        else if(a[mid] == key){
            // return true;
            cout<<mid<<endl;
            return;
        }
    }

    cout<<low<<endl;

}
int main(){
    int n ;
    cin>>n ;
    int a[n];
    for(int i = 0  ; i< n ; i++){
        cin>>a[i];
    }
    int key;
    cin>>key;


     bsearch(a,n,key);
    return 0;
}