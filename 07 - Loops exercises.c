
//QN6
#include <stdio.h>
#include <math.h>
int main(void){

    int a;
    printf("Enter n:");
    scanf("%d",&a);
    for (int i = 1;i <= a;i++){
        printf("--\\|/-");
    }printf("\n");

    for (int i = 0;i < a;i++){
        printf("%d",(a-i)*(a-i));
        printf(" ");
    }printf("\n");

    for (int i = 1;i <= a;i++){
        printf("%d%d%d",i,i+1,i+2);
        printf(" ");
    }printf("\n");

    for (int i = 0;i <= a-1;i++){
        printf("%c%c",65+i,97+i);   
    }printf("\n");

    for (int i = 0;i < a;i++){
        printf("%d ",a-i);   
    }printf("\n");

    int counter = 1;
    int result = 0;
    for (int i = 1;i <= a;i++){
        result = result + i*counter; 
        printf("%d ",result); 
        counter *= 10;
    }printf("\n");
}

