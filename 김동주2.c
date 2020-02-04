#include <stdio.h>

int main() {
	int number;
	int i;
	int sum = 0;

	printf("계산하고자 하는 최대값을 입력하세요 : ");
	scanf("%d", &number);

	//최대값까지의 합
	for (i = 0; i < number; i++) {
		sum = sum + (i + 1);
	}
	printf("1부터 입력한 최대값까지의 합은 %d입니다.\n", sum);

	//최대값까지의 홀수의 합
	i = 0;
	sum = 0;
	while (i <= number) {
		if (i % 2 != 0) {
			sum = sum + i;
		}
		i++;
	}
	printf("1부터 입력한 최대값까지의 홀수의 합은 %d입니다.\n", sum);

	//최대값까지의 짝수의 합
	i = 0;
	sum = 0;
	do {
		if (i % 2 == 0) {
			sum = sum + i;
		}
		i++;
	} while (i <= number);
	printf("1부터 입력한 최대값까지의 짝수의 합은 %d입니다.\n", sum);

	return 0;
}



