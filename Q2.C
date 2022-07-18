#include<stdio.h>
int main(){
    int a;
    printf("Enter a number - ");
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("The given number is divisible by 5");
    }else
    {
        printf("the given numver is non-divisible by 5");
    }
}