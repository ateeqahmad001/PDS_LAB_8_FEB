#include<stdio.h>

int main(){
    const int n;
    printf("Enter the amount of number :");
    scanf("%d",&n);
    int c_ex = 0,c_A = 0,c_B = 0 ,c_C = 0,c_D = 0,c_P = 0 ,c_F = 0;
    int marks[n];
    for(int i=0 ;i<n;i++){
        printf("Enter the marks of %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int k =0;k<n;k++){
        if(marks[k]>85 && marks[k]<=100)
        c_ex++; 
        else if (marks[k]>75 && marks[k]<=85)
        c_A++;
        else if (marks[k]>65 && marks[k]<=75)
        c_B++;
        else if (marks[k]>55 && marks[k]<=65)
        c_C++;
        else if (marks[k]>45 && marks[k]<=55)
        c_D++;
        else if (marks[k]>35 && marks[k]<=45)
        c_P++;
        else if (marks[k]>0 && marks[k]<=35)
        c_F++;   
    }
    printf("EX : ");
    for(int i = 0;i<c_ex;i++){
       printf("* "); 
    }
    printf("\n");
    printf("A : ");
    for(int i = 0;i<c_A;i++){
        printf("* ");
    }
    printf("\n");
    printf("B : ");
    for(int i = 0;i<c_B;i++){
        printf("* ");
    }
    printf("\n");
    printf("C : ");
    for(int i = 0;i<c_C;i++){
        printf("* ");
    }
    printf("\n");
    printf("D : ");
    for(int i = 0;i<c_D;i++){
        printf("* ");
    }
    printf("\n");
    printf("P : ");
    for(int i = 0;i<c_P;i++){
        printf("* ");
    }
    printf("\n");
    printf("F : ");
    for(int i = 0;i<c_F;i++){
        printf("* ");
    }

    return 0;
}