//문자열: 문자들이 열거 char
#include <stdio.h>

int main(){
    char arr[] = "Hello, world!";

    printf("배열의 크기: %lu\n", sizeof(arr) / sizeof(char));
}
