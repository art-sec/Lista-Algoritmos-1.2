#include <stdio.h>

float aritmetica(float n1, float n2, float n3) {
	return (n1 + n2 + n3) / 3;
}

float ponderada(float n1, float n2, float n3) {
	return ((n1*3) + (n2*3) + (n3*4)) / 10;
}

int main() {
	int escolha;
	float nota1, nota2, nota3;
	printf("Insira a primeira nota do aluno: \n");
	scanf("%f", &nota1);
	printf("Insira a segunda nota do aluno: \n");
	scanf("%f", &nota2);
	printf("Insira a terceira nota do aluno: \n");
	scanf("%f", &nota3);
	printf("Qual tipo de media voce deseja? (digite 1 para aritmetica e 2 para ponderada)\n");
	scanf("%d", &escolha);
	if (escolha == 1) {
		printf("A media aritmetica do aluno e: %.2f", aritmetica(nota1, nota2, nota3));
	}
	else if (escolha == 2) {
		printf("A media ponderada do aluno e: %.2f", ponderada(nota1, nota2, nota3));
	}
	return 0;
}