#include<stdio.h>
int main(){
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    if(x>=97&&x<123){
        printf("%c is a lowercase alphabet",x);
    }else if(x>=65&&x<91){
        printf("%c is an uppercase alphabet",x);
    }else if(x>=48&&x<58){
        printf("%c is a digit ",x);
    }else{
        printf("%c is a special character",x);
    }
    return 0;
}