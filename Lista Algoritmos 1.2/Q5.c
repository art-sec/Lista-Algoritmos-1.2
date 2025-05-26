#include <stdio.h>

int main() {
	float number;

	printf("Insira um numero:\n");
	scanf("%f", &number);

	if (number > 0) {
		printf("O numero: %.2f e positivo", number);
	}
	else {
		printf("O numero: %.2f e negativo", number);
	}
}