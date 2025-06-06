//소수점 형태 -> 지수형태 -> C언어 표기법
// 0.0000314 -> 0.314*10^-4 -> 0.314E-4
// 즉, 10은 E로 표기한다.

#include<stdio.h>

int main(void)
{
    printf("%.lf\n", 1e6); //지수 형태의 실수 를 소수점 형태로 출력
    printf("%d\n", 1e6);    //지수 형태의 실수를 정수로 출력
    printf("%f\n", 1e6);    //지수 형태의 실수를 실수로 출력
    printf("%le\n", 1e6);   //지수 형태의 실수를 지수 형태로 출력
    printf("%le\n", 0.0000314); //소수점 형태의 실수를 지수 형태로 출력
    printf("%.7lf\n", 3.14e-5); //소수점 이하 7자리까지 출력
    printf("%.2le\n", 0.0000314);   //지수 형태로 소수점 이하 둘째 자리까지 출력

    return 0;

}