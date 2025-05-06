// 변환문자 %c는 char형 변수의 값을 아스키 코드 값을 아스키 코드 값으로 해석하여 그에 해당하는 문자를 출력한다.

#include<stdio.h>

int main(void)
{
    char ch1 = 'A';     // 문자로 초기화, 저장된 값은 문자의 아스키 코드 값
    char ch2 = 65;      // 문자 'A'의 아스키 코드 값에 해당하는 정수로 초기화
    
    printf("문자 %c의 아스키 코드 값: %d\n", ch1, ch2);
    printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);

    return 0;

}