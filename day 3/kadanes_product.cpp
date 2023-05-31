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

    // brute force

    // for(int i = 0 ; i< n  ; i++){
    //     for(int j = i ; j<n ; j++ ){
    //         prod*=a[j];
    //         if(prod > maxProd){
    //             maxProd = max(prod , maxProd);
    //         }
    //     }
    // }

    //  my optimal solution
    // int r ;
    // for(int i =  0 ; i< n ; i++){
    //     prod*=a[i];

    //     if(prod>maxProd){
    //         maxProd = prod;
    //         r = i;
    //     }
    //     if(prod < 1)prod = 1;

    // }

    // cout<<maxProd<< "  "<<r <<endl;

    int prefix = 1;
    int suffix = 1;

    for (int i = 0; i < n; i++)
    {
        prefix *= a[i];
        if (prefix > maxProd)
        {
            maxProd = prefix;
        }
        if (prefix == 0)
        {
            prefix = 1;
        }

        suffix *= a[n-i-1];
        if (suffix > maxProd)
        {
            maxProd = suffix;
        }
        if (suffix == 0)
        {
            suffix = 1;
        }
    }

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     suffix *= a[i];
    //     if (suffix > maxProd)
    //     {
    //         maxProd = suffix;
    //     }
    //     if (suffix == 0)
    //     {
    //         suffix = 1;
    //     }

    // }
        cout << maxProd << endl;
    return 0;
}