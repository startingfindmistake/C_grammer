// 구조체
// 배열: 같은 형태의 데이터를 묶어 반복문으로 처리하는 자료형
// 구조체: 다양한 자료형을 하나로 묶을 수 있는 복합 자료형
// struct 구조체명 구조체_변수명;


#include<stdio.h>

struct student					// 구조체 선언
{
	int num;					// int형 멤버
	double grade;				// 세미콜론 사용
};

int main(void)
{
	struct student s1;			// struct student형의 변수 선언

	s1.num = 2;					// s1의 num 멤버에 2 저장
	s1.grade = 2.7;				// s1의 grade 멤버에 2.7 저장
	printf("학번 : %d\n", s1.num);	// num 멤머 출력
	printf("학점 : %.1lf\n", s1.grade);	// grade 멤버 출력


	return 0;

}