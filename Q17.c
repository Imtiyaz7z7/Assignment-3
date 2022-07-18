#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the side of a triangle: ");
    scanf("%f",&a);
    printf("Enter the side of a triangle: ");
    scanf("%f",&b);
    printf("Enter the side of a triangle: ");
    scanf("%f",&c);
    if(a+b>c){
        printf("This is a valid triangle");
    }else{
        printf("This is not a valid triangle");
    }
    return 0;
}