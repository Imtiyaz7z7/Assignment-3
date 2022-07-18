#include<stdio.h>
int main(){
    int a;
    printf("Enter a number - ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("The given number is an even number");
    }else
    {
        printf("the given numver is an odd number");
    }
}