//  포인터(pointer) : 변수의 주소를 저장하는 변수
#include <stdio.h>

int main(){
    int a = 20;

    char c = 'h';
    

    int *ptr_a;
    char *ptr_c; //자료형 선언 후 *변수

    ptr_a = &a; //&주소값

   // printf("%d\n", ptr_a);
   printf("a의 값: %d\n", a);
   printf("a의 주솟값: %d\n", &a);
   printf("ptr_a에 저장된 값: %d\n", ptr_a);
   printf("ptr_a가 가르키는 변수의 값: %d\n", *ptr_a);



}
