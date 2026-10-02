#include <stdio.h>
#include <string.h>
int main(){
    char name[500];

    printf("enter 9 name:");
    scanf("%s", name);

    if (strcmp(name, "anand") == 0){
        printf("wow your are right 100 100 super ");

    }
    else{
        printf("sorry you enter wrong  9 name ans start with A9 ");
    }
    return 0;

}