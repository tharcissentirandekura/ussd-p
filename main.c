#include<stdio.h>
#include "userInput.h"

int main(){
    int number = getInt("Enter a number: ");
    char* text = getString("Enter your text: ");

    printf("Number is %d and text is %s", number,text);
    return 0;

}