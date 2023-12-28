#include <stdio.h>

int main(){
    int n;
    int arr[100];

    scanf("%d", &n);
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i<n; i++){
        if(max < arr[i]) max = arr[i]; //min 값을 원할경우 방향만 바꾸면 됨 변수 max와
    }

    printf("%d\n",max);
}