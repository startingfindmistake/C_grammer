// 배열에는 대입 연사자 ( = )를 사용할 수 없습니다.
// 배열명은 주소 상수이므로 변수만 가능한 대입 연산자 왼쪽에 쓸 수 없습니다


//char 배열에 초기화 이외에 문자열을 저장할 때는 strcpy함수를 사용한다.
// strcpy 함수는 string copy의 뜻으로 문자열을 복사한다.

#include<stdio.h>
#include<string.h>          // 문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
    char fruit[20] = "strawberry";  //strawberry로 초기화

    printf("%s\n", fruit);          //strawberry 출력
    strcpy(fruit, "banana");        //fruit에 banana 복사
    printf("%s\n", fruit);          //banana 출력

    return 0;
}