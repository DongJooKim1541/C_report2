#include <stdio.h>

int main() {
	int number;
	int i;
	int sum = 0;

	printf("����ϰ��� �ϴ� �ִ밪�� �Է��ϼ��� : ");
	scanf("%d", &number);

	//�ִ밪������ ��
	for (i = 0; i < number; i++) {
		sum = sum + (i + 1);
	}
	printf("1���� �Է��� �ִ밪������ ���� %d�Դϴ�.\n", sum);

	//�ִ밪������ Ȧ���� ��
	i = 0;
	sum = 0;
	while (i <= number) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
		i++;
	}
	printf("1���� �Է��� �ִ밪������ Ȧ���� ���� %d�Դϴ�.\n", sum);

	//�ִ밪������ ¦���� ��
	i = 0;
	sum = 0;
	do {
		if (i % 2 == 0) {
			sum = sum + i;
		}
		i++;
	} while (i <= number);
	printf("1���� �Է��� �ִ밪������ ¦���� ���� %d�Դϴ�.\n", sum);

	return 0;
}



