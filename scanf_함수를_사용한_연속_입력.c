// scanf 함수 사용법
// 변수의 형태에 맞는 변환 문자를 사용하고 입력할 변수 앞에 & 앰퍼샌드(ampersand)를 붙인다.
// ex) int형 변수 a에 정수를 입력
// scanf("%d", &a);


// scanf 함수에서 변수명을 지정할 때는 &을 붙여야 합니다.
// & 기호는 변수의 주소를 구하는 연산자
// scanf함수에서 사용한 변환 문자와 맞는 형태의 데이터를 입력해야 합니다.

//scanf 함수는 여러 개의 변환 문자를 나열하여 한 번에 2개 이상의 변수에 값을 입력
// ex) int형 변수 age와 double형 변수 height에 입력을 하여 출력한다면

#include<stdio.h>

int main(void)
{
    int age;                    //나이는 정수형
    double height;              //키는 실수형

    printf("나이와 키를 입력하세요 : ");    // d입력 안내 메시지 출력
    scanf("%d%lf", &age, &height);      // 나이와 키를 함게 입력
    printf("나이는 %d살, 키는 %.1lfcm입니다.\n",age, height);   // 입력값 출력

    return 0;
}