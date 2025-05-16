// void 포인터
/*
- void포인터는 가리키는 자료형이 정해지지 않은 포인터이다.
- 참조 연산이나 정수를 더한는 포인터 연산이 불가능하다.

*/

#include<stdio.h>

int main(void)
{
	int a = 10;			// int형 변수
	double b = 3.5;		// double형 변수
	void* vp;			// void 포인터

	
	vp = &a;			// int형 변수의 주소 저장
	printf("a : %d\n", *(int*)vp);


	vp = &b;			// double형 변수의 주소 저장
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}