#include <stdio.h>

int main() {
	int number;
	printf("Insira o numero que voce deseja verificar: \n");
	scanf_s("%d", &number);

	if (number % 2 == 0) {
		printf("seu numero: %d e par", number);
	}
	else {
		printf("seu numero: %d e impar", number);
	}
	return 0;
}