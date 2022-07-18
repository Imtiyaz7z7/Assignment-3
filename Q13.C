#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%3==0&&x%2==0){
        printf("%d is divisible by 3 and 2 ",x);
    }else{
        printf("%d is indivisible by 2 and 3 ",x);
    }
    return 0;
}
