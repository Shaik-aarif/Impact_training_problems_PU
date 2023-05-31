#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a;
    vector<int> b;

    set <int> s ;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        s.insert(x);
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
        s.insert(x);
    }

    vector<int> unn;

    for( auto x : s){
        unn.push_back(x);
    }

    for( auto x : unn){
        cout<<x<<" ";
    }


    return 0;
}