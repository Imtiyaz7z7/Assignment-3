#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0){
        printf("%d is positive",x);
    }else if(x<0){
        printf("%d is negative",x);
    }else{
        printf("the given number is zero",x);
    }
    return 0;
}
