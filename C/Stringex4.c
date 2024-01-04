#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Hello";
    char str2[100];

    strcpy(str2, str1); // strcpy(사본, 원본);
    
    printf("str2의 값: %s\n", str2);
}