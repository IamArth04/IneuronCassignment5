#include<stdio.h>
int main(){
    int i=0;
    int n=0;
    int s=0;
    printf("\nThe Square of first 10 natural numbers are:");
    for(i=1;i<=10;i++)
    {
        n=i*i;
        s=s+i;
        printf("\nThe square of %d is %d",i,n);
    }
    printf("\nThe square of first 10 natural number is %d",s);
    return 0;
}