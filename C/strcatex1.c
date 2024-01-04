#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "Hellop";

    strcat(str, "World!");
    strcat(str, "World!");
    strcat(str, "World!");

    printf("%s\n", str); //무한정 덧붙이기 가능 
}