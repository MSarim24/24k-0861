#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Enter number: ");
    scanf("%d",&num2);
    printf("Enter number: ");
    scanf("%d",&num3);
    if (num1>num2){
        if (num1>num3){
            printf("%d is the greatest",num1);
        }
        else{
            printf("%d is the greatest",num3);
        }
    }
    else if (num2>num3){
            printf("%d is the greatest",num2);
    }
    else{
        printf("%d is the greatest",num3);
    }

}