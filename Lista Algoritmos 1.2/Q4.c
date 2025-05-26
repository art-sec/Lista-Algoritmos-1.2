#include <stdio.h>

int main() {
	float num1, num2;

	printf("Insira o primeiro numero:\n");
	scanf("%f", &num1);
	printf("Insira o segundo numero:\n");
	scanf("%f", &num2);

	if (num1 > num2) {
		printf("%.2f > %.2f", num1, num2);
	}
	else {
		printf("%.2f > %.2f", num2, num1);
	}
}