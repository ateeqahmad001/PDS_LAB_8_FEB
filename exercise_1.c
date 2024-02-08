#include<stdio.h>

int main(){
    const int n;
    printf("Enter the amount of number :");
    scanf("%d",&n);
    int array_original[n];
    int array_reverse[n];
    for(int i = 0; i<n; i++){
        printf("Enter the %d number :",i+1);
        scanf("%d",&array_original[i]);
    }
    for(int j = 0; j<n; j++){
        array_reverse[j] = array_original[n-1-j];
    }
    printf("original order of the array is : ");
    for(int k =0; k<n; k++){
        printf(" %d ",array_original[k]);
    }
    printf("\n");
    printf("reverse order of the array is : ");
    for(int k =0; k<n; k++){
        printf("%d ",array_reverse[k]);
    }

    return 0;
}