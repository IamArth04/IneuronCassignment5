#include<stdio.h>
int main(){
    int i;
    printf("The first 10 odd natural numbers in reverse order:\n");
    for(i=10;i>=1;i--)
    {
        printf("%d",2*i-1);
        printf("\n");
    }
    return 0;
}