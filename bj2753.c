#include <stdio.h>
main(){
    int a;
    scanf("%d",&a);// 1. scanf에는 주소 연산자(&)가 필요합니다.
    if (a%400==0){// 2. 비교 연산자는 '='가 아니라 '=='입니다.
        printf("1");
    }
    else if (a%100==0){
        printf("0");
    }
    else if (a%4==0){
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}
/*
if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
    printf("1");
} else {
    printf("0");
}*/
