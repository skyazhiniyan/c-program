#include <stdio.h>
int main(){
    printf("leap year finder");
    int year;
    
    scanf("%d",&year);
    if(year%100 == 0){
        if(year%400 == 0){
            printf("%d is a leap year ",year);

        }
        else{
            printf("it's not a leap year");
        }
    }
    if (year%4 == 0){
        printf("it is a leap year");
    }
    else{
        printf("its not a  leap year"); 
    }
       return 0;
    }

