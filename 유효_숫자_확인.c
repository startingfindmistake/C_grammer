/*
실수형은 저장하는 값에 따라 숫자가 정확하게 표현될 수도 있고 그렇지 않을 수도 있습니다.
값이 달라지는 이유는 컴퓨터에서 실수를 표현하는 방식이 오차를 갖고 있기 때문
float형은 유효 숫자 7
double형은 15자리 범위 내의 값을 사용 권장
*/

#include<stdio.h>

int main(void)
{
    float ft = 1.234567890123456789;
    double db = 1.1234567890123456789;

    printf("float형 변수의 값: : %.20f\n", ft);
    printf("double형 변수의 값: %.20lf\n", db);

    return 0;
}
