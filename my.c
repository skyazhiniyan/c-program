#include <stdio.h>
int main(){
    printf("welcome to the odd or even finder\n ");
    int a;
    printf("/n enter a number: ");
    scanf("%d",&a);
    if (a % 2 == 0){
        printf("the number %d is even ",a);
    }
    else{
        printf("the number %d is odd ",a);
    }
     return 0;
}
