#include<stdio.h>
int main(){
    int i;
    printf("The first 10 even Natural Numbers in Reverse Order:\n");
    for(i=10;i>=1;i--)
    {
        printf("%d",2*i);
        printf("\n");
    }
    return 0;
}