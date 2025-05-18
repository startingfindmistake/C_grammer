// 문자열 저장
// char 배열명[문자열길이 + 1] = 문자열;
// char fruit[6] = "apple";
/*
문자열의 길이보다 배열의 크기를 하나 더 크게 잡는 이유는
컴파일러가 문자열의 끝에 \0(널 문자null character)을 자동으로 추가하기 때문
*/

#include<stdio.h>

int main(void)
{
    char fruit[20] = "strawberry";             //char 배열 선언과 문자열 초기화

    printf("딸기: %s\n", fruit);                //배열명으로 저장된 문자열 출력
    printf("딸기쨈: %s %s\n", fruit, "jam");    // 문자열 상수를 직접 %s로 출력


    return 0;
}

// 문자열은 char형을 배열 형태로 만들어 저장하며 %s로 출력한다.
//테스트
//테스트2