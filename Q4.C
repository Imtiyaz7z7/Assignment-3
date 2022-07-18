#include<stdio.h>
int main(){
    int a;
    printf("Enter a number - ");
    scanf("%d",&a);
    int b=a&1;
    if (b==0)
    {
        printf("The given number is an even number");
    }else
    {
        printf("the given numver is an odd number");
    }
}