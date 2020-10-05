//QN 9 
#include <stdio.h>
int main (void){
    int num;
    int sum = 0;
    printf("Enter positive integer:");
    scanf("%d",&num);

    if(num == 1 || num == 2)
        printf("%d is a perfect number!",num);

    for(int i = 1; i <= num; i++){
        if(num != sum && sum < num){
            sum += i;
        }else if(num == sum){
            printf("%d is a perfect number!\n",sum);
                break;
        }else if(sum > num){
            printf("%d is a not perfect number!\n",num);
            break;
            }
        }
    }
