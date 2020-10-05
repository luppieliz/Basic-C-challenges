//QN5  
#include <stdio.h>
int main(void){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    for(int i = 1; i <= a; i++){
        if (i%15 == 0){
            printf("FizzBuzz ");
        }else if(i%5 == 0){
            printf("Buzz ");
        }else if (i%3 == 0){
            printf("Fizz ");
        }else{
            printf("%d ",i);
        }
    }
}
