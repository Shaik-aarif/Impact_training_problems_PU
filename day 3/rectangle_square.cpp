#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int l , b , a;
    cin>>l>>b>>a;
    int x_minsq_l , y_remW ,z_minsq_b;
    if(l%a == 0){
        x_minsq_l = l/a;
    }
    else{
        x_minsq_l = l/a ;
        x_minsq_l++;
    }

    y_remW = b-a ;
    if(y_remW > 0){


    if(y_remW%a  == 0 ){
        z_minsq_b=(y_remW/a);
    }
    else{
        z_minsq_b=(y_remW/a);
        z_minsq_b++;
    }
    z_minsq_b++;

    cout<<x_minsq_l * z_minsq_b<<endl;
    return 0 ;
    }
    cout<<x_minsq_l<<endl;


    return 0;
}