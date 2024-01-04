#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "simple";
    char str2[] = "simple";

    int cmp = strcmp(str2, str1);

    printf("%d\n", cmp);
}