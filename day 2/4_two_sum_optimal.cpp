#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int target ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin>>target ;

    int left = 0 ; 
    int right = n-1;

    sort(a , a+n);
    while( left < right ){
        if(a[left] + a[right] == target ){
            cout<<"Yes"<<endl;
            return 0 ;
        }
        else if ( a[left] + a[right]  < target){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<"No"<<endl;
    return 0;
}