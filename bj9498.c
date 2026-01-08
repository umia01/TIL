#include <stdio.h>
main(){
    int a;
    scanf("%d",&a);// 값을 입력받을 때는 주소 연산자 &가 필요합니다.
    if(a>=90){// 논리 연산자 &&를 사용하여 범위를 지정해야 합니다.
        printf("A");
    }
    else if(a>=80){
        printf("B");
    }
    else if(a>=70){
        printf("C");
    }
    else if(a>=60){
        printf("D");
    }
    else {// else 뒤에는 괄호()가 오지 않습니다.
        printf("F");
    }
    return 0;
}