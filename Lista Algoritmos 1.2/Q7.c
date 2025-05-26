#include <stdio.h>

int main() {
    char resposta;
    int contador = 0;

    printf("Responda com 's' para sim e 'n' para não.\n");

    printf("Telefonou para a vítima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    printf("Esteve no local do crime? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    printf("Mora perto da vítima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    printf("Devia para a vítima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    printf("Já trabalhou com a vítima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    // Classificação
    if (contador == 5) {
        printf("Classificação: Assassino\n");
    }
    else if (contador >= 3) {
        printf("Classificação: Cúmplice\n");
    }
    else if (contador == 2) {
        printf("Classificação: Suspeita\n");
    }
    else {
        printf("Classificação: Inocente\n");
    }

    return 0;
}
