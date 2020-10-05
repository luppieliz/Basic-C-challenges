//QN10
#include <stdio.h>
int main (void){
    int sequence;
    int starting;

    printf("Enter count of ascending sequence:");
    scanf("%d",&sequence);
    
    printf("Enter the starting digit:");
    scanf("%d",&starting);

    printf("%d ",starting);

    for(int i = 1; i < sequence; i++){
        printf("%d",starting);

        if(sequence < starting){
            for(int j = 0; j < i; j++ ){
                starting += j;
            printf("%d",starting + 1);
            }
        }else if(sequence > starting){
            for(int j = starting; j < i+starting; j++ ){
            printf("%d",j + 1);
            }
        }
        printf(" ");
    }
}
