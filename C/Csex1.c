//연산자: + - / * % += -= ++ -- && || !
// 조건문 : if() switch()
// 반본문: while() for()

#include <stdio.h>

int main(){
    int score;
    scanf("%d",&score);

    if(score > 100 || score <0){
        printf("잘못 입력하셨습니다. \n");
    }else{
        if(score >= 90){
            printf("A\n");
        }else if (score >= 80){
            printf("B\n");
        }else if (score >= 70){
            printf("C\n");
        }else if (score >= 60){
            printf("D\n");
        }else{
            printf("E\n");
        }
    }



}