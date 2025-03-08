#include <stdio.h>

int getInt(char* message){
    int input;
    printf("%s :", message);
    scanf("%d", &input);
    return input;
}

char* getString(char* message){
    static char input[100];  // to not be destroyed after return
    printf("%s", message);
    scanf("%s", input);
    return input;
}