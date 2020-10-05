//QN5
#include <stdio.h>
#include <stdbool.h>

int main(void){

    char ch ;
    printf("Enter char:");
    scanf("%c",&ch);

    if(ch >= 48 && ch <= 57)
        printf("%c is a digit\n",ch);
    else if(ch >= 97 && ch <= 122)
        printf("%c is a lowercase letter\n",ch);
    else if(ch >= 65 && ch <= 90)
        printf("%c is an uppercase letter\n",ch);
    else
        printf("%c is a special character\n",ch);
}