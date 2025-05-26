#include <stdio.h>

int main() {
	char typedLetter;
	printf("Qual seu sexo?(Responda com F ou M)\n");
	scanf("%c", &typedLetter);

	if (typedLetter == 'F') {
		printf("F - Feminino");
	}
	else if (typedLetter == 'M') {
		printf("M - Masculino");
	}
	else {
		printf("sexo invalido");
	}
}