//정수와 실수
//C99이후 printf에서는 float도 자동으로 double로 승격되므로 %lf 대신에 %f로 쓰는 것이 일반적이다.

#include<stdio.h>

int main(void)
{
    printf("%d\n", 10);     // %d 위치에 10 출력
    printf("%f\n", 3.4);   //%lf 위치에 3.4를 소수점 이하 6자리까지 출력
    printf("%.f\n", 3.45); //소수점 이하 첫째 자리까지 출력(둘째 자리에서 반올림)
    printf("%.10f\n", 3.4); //소수점 이하 10자리까지 출력

    printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
    printf("%.f - %.1f = %.f\n", 3.4, 1.2, 3.4 - 1.2);

    return 0;
}