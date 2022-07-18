#include<stdio.h>
int main(){
    int marks1,marks2,marks3,marks4,marks5;
    printf("Enter your marks 1: ");
    scanf("%d",&marks1);
    printf("Enter your marks 2: ");
    scanf("%d",&marks2);
    printf("Enter your marks 3: ");
    scanf("%d",&marks3);
    printf("Enter your marks 4: ");
    scanf("%d",&marks4);
    printf("Enter your marks 5: ");
    scanf("%d",&marks5);
    if (marks1<=100&&marks2<=100&&marks3<=100&&marks4<=100&&marks5<=100)
    {
        if(marks1<33&&marks2<33&&marks3<33&&marks4<33&&marks5<33){
            printf("you are failed");
        }else{
            printf("you are passed congratulations");
        }
    }else{
        printf("Marks cannot be greater then 100");
    }
    return 0;
}