#include <stdio.h>

int main() {
    char resposta;
    int contador = 0;

    printf("Responda com 's' para sim e 'n' para n�o.\n");

    printf("Telefonou para a v�tima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    printf("Esteve no local do crime? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    printf("Mora perto da v�tima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    printf("Devia para a v�tima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    printf("J� trabalhou com a v�tima? ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') contador++;

    // Classifica��o
    if (contador == 5) {
        printf("Classifica��o: Assassino\n");
    }
    else if (contador >= 3) {
        printf("Classifica��o: C�mplice\n");
    }
    else if (contador == 2) {
        printf("Classifica��o: Suspeita\n");
    }
    else {
        printf("Classifica��o: Inocente\n");
    }

    return 0;
}
