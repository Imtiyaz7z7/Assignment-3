#include<stdio.h>
int main(){
    int a;
    printf("Write a number: ");
    scanf("%d",&a);
    if (a-100>=0)
    {
        printf("given number is a three digit number");
    }else
    {
        printf("given number is not a three digit number");
        
    }
    return 0;
}