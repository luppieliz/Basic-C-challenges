//QN3
#include <stdio.h>

int main(void){
    int largest = 0;
    int Smallest = 0;
    int input;
    printf("Enter n:");
    scanf("%d",&input);
    printf("largest so far == %d. Smallest so far == %d\n",input,input);
    largest = input;
    Smallest = input;
    
    for (int i = 0; i < 4;i++){
    printf("Enter n:");
    scanf("%d",&input);

        if(input > largest){
            largest = input;
            printf("largest so far == %d. Smallest so far == %d\n",largest,Smallest);
        }else if(input < Smallest){
            Smallest = input;
            printf("largest so far == %d. Smallest so far == %d\n",largest,Smallest);
        }
}
}