#include <stdio.h>

int main(){

    char Estado = 'A';
    char codigo[50] = "A02";
    char cidade[50] = "Fortaleza";
    int populacao = 2574412;
    float area = 313.8;
    float PIB = 73.4;
    int pontosturisticos = 15;

    printf("O estado é: %c\n", Estado);
    printf("O codigo da carta é: %s\n", codigo);
    printf("A cidade é: %s\n", cidade);
    printf("A populacao é de: %d Milhões de habitantes\nOs pontos turisticos são: %d\n", populacao, pontosturisticos);
    printf("A area é: %.5f.km2\n", area);
    printf("O pib é: %.5f.Bilhoes\n", PIB);

    

    return 0;




}