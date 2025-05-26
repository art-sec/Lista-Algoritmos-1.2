#include <stdio.h>

int main() {
	float nota1, nota2, nota3, media;
	printf("Insira a primeira nota do aluno: \n");
	scanf("%f", &nota1);
	printf("Insira a segunda nota do aluno: \n");
	scanf("%f", &nota2);
	printf("Insira a teerceira nota do aluno: \n");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	if (media >= 7) {
		printf("O aluno de media: %.2f, esta aprovado", media);
	}
	else {
		printf("O aluno de media: %.2f, esta reprovado", media);
	}
}