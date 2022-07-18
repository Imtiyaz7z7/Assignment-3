#include<stdio.h>
int main(){
    int a,b;
    printf("Write a number: ");
    scanf("%d",&a);
    printf("Write a number: ");
    scanf("%d",&b);
    if (a<b)
    {
        printf("%d is a greater number\n",b);
    }else if(a>b)
    {
        printf("%d is a greater number\n",a);
        
    }else
    {
        printf("%d and %d are same numbers\n",a,b);
        
    }
    return 0;
}