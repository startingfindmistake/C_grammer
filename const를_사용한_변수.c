// 변수는 저장 공간이므로 언제든지 그 값을 바꿀 수 있다
// but, 변수를 선언할 때 그 앞에 const를 붙이면 초기화된 값을 바꿀수 없다.

#include<stdio.h>

int main(void)
{
    int income = 0;
    double tax;
    //const 자료형 변수명 = 값;         이렇게 선언한다.
    const double tax_rate = 0.12;

    //tax_rate의 값을 바꾸는 문장을 추가해 보고 에러를 발생시킨다.
    /*
    tax_rate = 0.15;
    */
    income = 456;
    tax = income * tax_rate;
    printf("세금은 : %.1lf입니다.\n", tax);

    return 0;
}