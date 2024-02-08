#include<stdio.h>
#include<math.h>
int main(){
    const int n ;
    printf("Enter the amount of number :");
    scanf("%d",&n);
    int value = 1;
    int coeff[n];
    int poly[n];
    for(int i = 0; i<n; i++){
        printf("Enter the %d coefficient and %d value of x :",i+1,i+1);
        scanf("%d %d",&coeff[i],&poly[i]);
    }
    for(int j=0;j<n;j++){
        value = value + (coeff[j] * pow(poly[j],j));
    }
    printf("The final value of your polynomial is : %d ",value);
    
    return 0;
}