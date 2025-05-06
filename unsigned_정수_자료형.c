/*
정수형은 보통 양수와 움수를 모두 저장하지만, 양수만을 저장하면 두 배 더 넓은 범위의 값을
저장 할 수 있습니다
따라서 나이와 같이 음수가 없는 데이터를 저장할 때는 unsigned를 사용합니다
*/

// 즉, 정수형을 양수 전용으로 쓰고 싶을 때는 unsigned를 사용한다
// unsigned 자료형은 항상 양수만 저장하고 %u로 출력한다.


#include<stdio.h>

int main(void)
{
    unsigned int a;

    a = 4294967295; //큰 양수 저장
    printf("%d\n", a);

    printf("%u\n", a);
    return 0;
}