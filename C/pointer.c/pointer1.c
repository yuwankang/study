#include <stdio.h>
//포인터 = 변수의 주소를 저장하는 변수
int main(){
    int a = 20;

    int *ptr_a;

    ptr_a = &a; // &a로 값을 ptr_a에 저장 &는 주솟값

    printf("%d\n", ptr_a);    

    printf("a의 값: %d\n", a);
    printf("a의 주솟값: %d\n", &a);
    printf("ptr_a에 저장된 값: %d\n", ptr_a);
    printf("ptr_a가 가리키는 변수의 값: %d\n", *ptr_a);
}