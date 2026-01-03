#include <stdio.h>
int main () {
    int a;
    scanf("%d",&a);//C언어의 scanf 함수는 입력받은 값을 변수에 저장할 때, 변수의 메모리 주소를 알아야 합니다. 따라서 변수명 앞에 &를 붙여야 합니다.
    printf("%d\n",a-543);
}