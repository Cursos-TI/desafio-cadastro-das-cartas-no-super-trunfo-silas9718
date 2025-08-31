#include <stdio.h>


int main() {
    char Estado[40];
    char Codigodacarta[50];
    char Nomdedacidade[50];
    int População;
    float Area;
    float pib;
    int pontosturisticos;

    //preparação para inserir as instruções e informações das cartas
    //definir cada atributo ao codigo da primeira carta


    printf("Digite o estado: \n");
    scanf("%s", &Estado);

    //colocar declarações com o especificador de string


    printf("Insira o código da sua carta: \n");
    scanf("%s", &Codigodacarta);


    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nomdedacidade);


    //colocar em seguida as declarações com o especificador de inteiro 


    printf("Insira o total de habitantes: \n");
    scanf("%d", &População);


    //colocar a seguir as declarações com o especificador de ponto flutuante 


    printf("Insira a Area em km2: \n");
    scanf("%f", &Area);


    printf("Digite o produto interno bruto(pib): \n");
    scanf("%f", &pib);


    printf("Digite o numero total de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    puts("Carta 01");

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigodacarta);
    printf("Nome da Cidade: %s\n", Nomdedacidade);
    printf("População: %d habitantes\n", População);
    printf("Área: %.2f Km2\n", Area);
    printf("PIB: %.2f Milhôes de reais\n", pib);
    printf("Números de pontos turísticos: %d\n", pontosturisticos);


    // repetir instruções para inserir a segunda carta


    printf("Digite o estado: \n");
    scanf("%s", &Estado);

    //colocar declarações com o especificador de string


    printf("Insira o código da sua carta: \n");
    scanf("%s", &Codigodacarta);


    printf("Digite o nome da cidade: \n");
    scanf("%s", &Nomdedacidade);


    //colocar em seguida as declarações com o especificador de inteiro 


    printf("Insira o total de habitantes: \n");
    scanf("%d", &População);


    //colocar a seguir as declarações com o especificador de ponto flutuante 


    printf("Insira a Area em km2: \n");
    scanf("%f", &Area);


    printf("Digite o produto interno bruto(pib): \n");
    scanf("%f", &pib);


    printf("Digite o numero total de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);


    //retorno dos valores inseridos e apresentação dos resultados

    puts("Carta 02");

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigodacarta);
    printf("Nome da Cidade: %s\n", Nomdedacidade);
    printf("População: %d habitantes\n", População);
    printf("Área: %.2f Km2\n", Area);
    printf("PIB: %.2f Milhôes de reais\n", pib);
    printf("Números de pontos turísticos: %d\n", pontosturisticos);


    // retornar aos resultados e fazer as correções necessarias

    return 0;
}
