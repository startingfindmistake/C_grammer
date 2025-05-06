#include<stdio.h>

int main(void)
{
    int kor, eng, mat, total;
    kor = 70, eng = 80, mat = 90;

    total = kor + eng + mat;

    printf("국어: %d, 영어: %d, 수학: %d\n", kor, eng, mat);
    printf("총점 %d\n", total);

    return 0;

}