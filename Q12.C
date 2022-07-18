#include<stdio.h>
int main(){
    char x;
    printf("Enter an alphabet: ");
    scanf("%c",&x);
    if(x>90){
        printf("%c is a lowercase alphabet ",x);
    }else{
        printf("%c is an uppercase alphabet ",x);
    }
    return 0;
}