#include<stdio.h>
int main()
{
	char a;//����  datetype 
	short b;
	int c;
	long d;
	float e;
	double f;
	
	printf("%d %d %d %d %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long));//�޸� �����Ʈ���� �˷��ִ� ������ 
	printf("%d %d\n", sizeof(float), sizeof(double));
	
	printf("%d %d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
	printf("%d %d\n", sizeof(e), sizeof(f));
	
	return 0;
}
