#include <stdio.h>
int main(){
    double a,b;// 정수형은 int %d, 실수형은 double %lf
    scanf("%lf %lf",&a,&b);
    printf("%.9f\n",a/b);
    return 0;
}