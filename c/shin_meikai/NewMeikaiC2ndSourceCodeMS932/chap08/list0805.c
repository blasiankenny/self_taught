// �w���̐g����ǂݍ���Ń\�[�g

#include <stdio.h>

#define NUMBER	5		// �l��

//--- �o�u���\�[�g ---//
void bsort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main(void)
{
	int height[NUMBER];		// NUMBER�l�̊w���̐g��

	printf("%d�l�̐g������͂���B\n", NUMBER);
	for (int i = 0; i < NUMBER; i++) {
		printf("%2d�ԁF", i + 1);
		scanf("%d", &height[i]);
	}

	bsort(height, NUMBER);		// �\�[�g

	puts("�����Ƀ\�[�g���܂����B");
	for (int i = 0; i < NUMBER; i++)
		printf("%2d�ԁF%d\n", i + 1, height[i]);

	return 0;
}