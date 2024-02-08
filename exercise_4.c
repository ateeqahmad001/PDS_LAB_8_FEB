#include<stdio.h>

int main(){
    const int n;
    printf("Enter the amount of number :");
    scanf("%d",&n);
    int max = 0,second_max = 0;
    int num[n];
    for(int i = 0; i<n; i++){
        printf("Enter the %d number :",i+1);
        scanf("%d",&num[i]);
    }
    for(int i = 0;i<n;i++){
        if(num[i]>max){
            second_max = max;
            max = num[i];
        }
        else if (num[i]>second_max && num[i] != max ){
            second_max = num[i];
        }
    }
    printf("Maximum : %d\n",max);
    printf("Second Maximum : %d\n",second_max);

    for(int j = 0;j<n;j++){
        if(num[j]<max){
            second_max = max;
            max = num[j];
        }
        else if (num[j]<second_max && num[j] != max ){
            second_max = num[j];
        }
    }
    printf("Minimum : %d\n",max);
    printf("Second Minimum : %d\n",second_max);


    return 0;
}