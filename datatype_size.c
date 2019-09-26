#include<stdio.h>
int main()
{
	char a;//변수  datetype 
	short b;
	int c;
	long d;
	float e;
	double f;
	
	printf("%d %d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));//메모리 몇바이트인지 알려주는 연산자 
	printf("%d %d\n", sizeof(float), sizeof(double));
	
	printf("%d %d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
	printf("%d %d\n", sizeof(e), sizeof(f));
	
	return 0;
}
