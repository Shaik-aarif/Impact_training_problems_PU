#include<stdio.h>
#include<math.h>

int main(){
    double a  ;
    scanf("%lf" , &a);
    
    double r2 = a/2; 
    double r1 = a/sqrt(2);
    printf("%lf" , r1);
    printf("\n");

    printf("%lf" , (3.14*r1*r1));
    printf("\n");
    printf("%lf" , (3.14*r1*r1) - (3.14*r2*r2));
    return 0;
    
}