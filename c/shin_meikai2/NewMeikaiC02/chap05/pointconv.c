/* �|�C���^�ƌ^�ϊ� */

#include  <stdio.h>

int main(void)
{
	double x;
	double *pd;
	char   *pc = (char *)&x;

	pc++;

	pd = (double *)pc;

	printf("pc = %p\n", pc);
	printf("pd = %p\n", pd);

	return 0;
}
