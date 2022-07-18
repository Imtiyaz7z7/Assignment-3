#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("enter the number: ");
    scanf("%d",&b);
    printf("enter the number: ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is a greatest number",a);
        }else{
            printf("%d is a greatest number",c);  
        }
    }else if (b>c)
    {
        printf("%d is a greatest number",b);
    }else{
        printf("%d is a greatest number",c);
    }
    
    return 0;
}