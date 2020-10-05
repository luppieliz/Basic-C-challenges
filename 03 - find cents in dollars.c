
//QN12
#include <stdio.h>
int main(void){

    double num;
    printf("Enter amount:");
    scanf("%lf",&num);

    int  num_of_1$ = num;
    int  num_of_50c = 0;
    int  num_of_20c = 0;
    int  num_of_10c = 0;
    int  num_of_5c = 0;
    int  num_of_1c = 0;

    int cents_remaining = num*100 - num_of_1$*100;
    if( num > 0 && num <= 10 ){
        printf("Number of 1$:%d\n",num_of_1$);
        if(cents_remaining > 50){

            cents_remaining -= 50;
            num_of_20c = cents_remaining / 20;
            cents_remaining -= num_of_20c*20;
            num_of_10c = cents_remaining / 10;
            cents_remaining -= num_of_10c*10;
            num_of_5c = cents_remaining / 5;
            cents_remaining -= num_of_5c*5;
            num_of_1c = cents_remaining ;
            cents_remaining -= num_of_1c*1;

            printf("Number of 50c:%d\n",num_of_50c + 1);
            printf("Number of 20c:%d\n",num_of_20c);
            printf("Number of 10c:%d\n",num_of_10c);
            printf("Number of 5c:%d\n",num_of_5c);
            printf("Number of 1c:%d\n",num_of_1c);
        }else if(cents_remaining <= 50){
            
            num_of_20c = cents_remaining / 20;
            cents_remaining -= num_of_20c*20;
            num_of_10c = cents_remaining / 10;
            cents_remaining -= num_of_10c*10;
            num_of_5c = cents_remaining / 5;
            cents_remaining -= num_of_5c*5;
            num_of_1c = cents_remaining / 1;
            cents_remaining -= num_of_1c*1;

            printf("Number of 50c:%d\n",num_of_50c);
            printf("Number of 20c:%d\n",num_of_20c);
            printf("Number of 10c:%d\n",num_of_10c);
            printf("Number of 5c:%d\n",num_of_5c);
            printf("Number of 1c:%d\n",num_of_1c);
            }     
        }   
    }

