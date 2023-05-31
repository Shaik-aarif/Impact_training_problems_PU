#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    vector<int> unn;

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {

        if (a[i] <= b[j])
        {
            if (unn.size() == 0 || unn.back() != a[i])
            {
                unn.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unn.size() == 0 || unn.back() != b[j])
            {
                unn.push_back(b[j]);
            }
            j++;
        }
    }

    while( i < n1){
         if (unn.size() == 0 || unn.back() != a[i])
            {
                unn.push_back(a[i]);
            }
            i++;
    }
    while(j < n2){
         if (unn.size() == 0 || unn.back() != b[j])
            {
                unn.push_back(b[j]);
            }
            j++;
    }


    for( auto x : unn){
        cout<<x<<" ";
    }


    return 0;
}