// 형변환 : 자료형을 다른 자료형으로 바꿈
#include <stdio.h>

int main(){
    int math = 90, korean = 95, english = 96;
    int sum = math + korean + english;
    double avg = (double)sum / 3;

    printf("%f/n", avg);
}

// 정수 / 정수 = 정수
// 실수 / 정수 = 실수
// 실수 / 실수 = 실수
