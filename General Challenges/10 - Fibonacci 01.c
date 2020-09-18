//QN11 FIB(limit 44)
#include <stdio.h>
int main(void){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int n1 = 0;
    int n2 = 1;
    for(int i = 0; i <= n; i++){
        int n3 = n1 + n2;
        printf("%d \n",n3);
        n1 = n2;
        n2 = n3;
    }
    
}