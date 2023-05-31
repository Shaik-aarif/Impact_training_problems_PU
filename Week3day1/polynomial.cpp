#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        cin >> a[i];
    }

    int x = n;
    for (int i = 0; i < n + 1; i++)
    {
        if(a[i]  == 0 ){
            x--;
            continue;
        }
        else if (a[i] == 1){
            if(x>0){
                cout<<"+x^"<<x;
                x--;
            }
            else if(x==0){
                cout<<"+"<<a[i];
            }
            else if(x==1){
                cout<<"+x";
                x--;
            }
        }
        else if(a[i] >0){

            if(i==0){
                if(x==1){
                cout<<a[i]<<"x";
                x--;
                
            }
            else if(x>0){
                
                cout<<a[i]<<"x^"<<x;
                x--;
            }
            else if(x==0){
                cout<<a[i];
                x--;
            }
            }
            else{
            if(x==1){
                cout<<"+"<<a[i]<<"x";
                x--;
                
            }
            else if(x>0){
                cout<<"+"<<a[i]<<"x^"<<x;
                x--;
            }
            else if(x==0){
                cout<<"+"<<a[i];
                x--;
            }
            }
        }
        else if(a[i]<0){
            if(x==1){
                if(a[i]==-1){
                cout<<"-x";
                }else{

                cout<<a[i]<<"x";
                }
                x--;
            }
            else if(x>0){
                if(a[i]==-1){
                cout<<"-x^"<<x;
                x--;    
                }else{

                cout<<a[i]<<"x^"<<x;
                x--;
                }
            }
            else if(x==0){
                cout<<a[i];
                x--;
            }
        }

        


        
    }
    return 0;
}