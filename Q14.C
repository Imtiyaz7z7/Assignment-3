#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%7==0||x%3==0){
        printf("%d is divisible by 7 or 3 ",x);
    }else{
        printf("%d is indivisible by 7 or 3 ",x);
    }
    return 0;
}
