#include<stdio.h>
int main(){
    int a;
    printf("Enter a month number: ");
    scanf("%d",&a);
    if (a<=12&&a>=1&&a%2==0||a==9||a==11)
    {
        printf("there are 30 days in a given month");
    }else if (a<=12&&a>=1&&a%2!=0||a==8||a==10||a==12)
    {
        printf("there are 31 days in a given month");
    }else{
        printf("invalid number");
    }
    return 0;
}