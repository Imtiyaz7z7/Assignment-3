#include<stdio.h>
int main(){
    float a,b;
    printf("Enter selling price: ");
    scanf("%f",&a);
    printf("Enter cost price: ");
    scanf("%f",&b);
    if (a>b)
    {
        float profit = a-b;
        printf("profit = %f and\n",profit);
        float profitPercent = (profit*100/b);
        printf("%f is the profit percentage",profitPercent);
    }else{
        float loss = b-a;
        printf("loss = %f and\n",loss);
        float lossPercent = (loss*100/b);
        printf("%f is the loss percentage",lossPercent);

    }
    
    return 0;
}