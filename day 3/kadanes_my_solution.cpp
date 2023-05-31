#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxProd = INT_MIN;
    int prod = 1;

    

    //  my optimal solution
    int r ;
    for(int i =  0 ; i< n ; i++){
        prod*=a[i];

        if(prod>maxProd){
            maxProd = prod;
            r = i;
        }
        if(prod < 1)prod = 1;

    }

    cout<<maxProd<< "  "<<r <<endl;
    return 0;
}