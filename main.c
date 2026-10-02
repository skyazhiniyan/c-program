#include <stdio.h>
#include <string.h>
int main(){
    char name[500];

    printf("enter 9 name:");
    scanf("%s", name);

    if (strcmp(name, "anandh") == 0){
        printf("wow your are right 100 100 super ");

    }
    else{
        printf("sorry you are wrong enter the rely 9 name ");
    }
    return 0;

}
