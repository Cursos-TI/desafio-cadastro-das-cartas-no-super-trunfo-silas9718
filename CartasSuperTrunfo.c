#include <stdio.h>


int main() {
    char Estado[40];
    char Codigodacarta[50];
    char Nomdedacidade[50];
    unsigned long int População;
    float Area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibpercapita;
    float superpoder;

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


    printf("Digite o produto interno bruto: \n");
    scanf("%f", &pib);


    printf("Digite o numero total de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    puts("Carta 01");

    densidade = (float) População / Area;

    pibpercapita = (float) pib / População;

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigodacarta);
    printf("Nome da Cidade: %s\n", Nomdedacidade);
    printf("População: %d habitantes\n", População);
    printf("Área: %.2f Km2\n", Area);
    printf("PIB: %.2f Bilhôes de reais\n", pib);
    printf("Números de pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f  hab/km2 \n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita);

    // calcular o super pode de carta 01

    printf("*** SUPERPODER CARTA01***\n\n");

    float densidadeinvert01 = (1 / densidade);
    

    superpoder = (População + Area + pib + pontosturisticos + pibpercapita + densidadeinvert01 );


    printf("O super poder da Carta 01 è: %.2f\n\n", superpoder);

    //calcular o resultado de cada um para futura comparação para ao final exibir os resultados
    

    unsigned long int resultado_hab01 = População;
    float resultado_area01 = Area;
    float resultado_pib01 = pib;
    int resultado_ponto01 = pontosturisticos;
    float resultado_densidade01 = densidadeinvert01;
    float resultado_pibpercapita01 = pibpercapita;
    float resultado_superpower01 = superpoder;


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


    printf("Digite o produto interno bruto: \n");
    scanf("%f", &pib);


    printf("Digite o numero total de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);


    //retorno dos valores inseridos e apresentação dos resultados

    puts("Carta 02");

    densidade = (float) População / Area;

    pibpercapita = (float) pib / População;

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigodacarta);
    printf("Nome da Cidade: %s\n", Nomdedacidade);
    printf("População: %d habitantes\n", População);
    printf("Área: %.2f Km2\n", Area);
    printf("PIB: %.2f Bilhôes de reais\n", pib);
    printf("Números de pontos turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f  hab/km2 \n", densidade);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita);


    // calcular o super poder da carte 02

     printf("*** SUPERPODER CARTA02***\n\n");

    float densidadeinvert02 = (1 / densidade);
    

    superpoder = (População + Area + pib + pontosturisticos + pibpercapita + densidadeinvert02 );


    printf("O super poder da Carta 02 è: %.2f\n\n", superpoder);


    unsigned long int resultado_hab02 = População;
    float resultado_area02 = Area;
    float resultado_pib02 = pib;
    int resultado_ponto02 = pontosturisticos;
    float resultado_densidade02 = densidadeinvert02;
    float resultado_pibpercapita02 = pibpercapita;
    float resultado_superpower02 = superpoder;


    //apresentar as comparações dos resultados

    printf("*** BATALHA DE CARTAS #SUPERTRUNFO ***\n\n");

    float resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;

    resultadoA = resultado_hab01 > resultado_hab02;
    resultadoB = resultado_area01 > resultado_area02;
    resultadoC = resultado_pib01 > resultado_pib02;
    resultadoD = resultado_ponto01 > resultado_ponto02;
    resultadoE = resultado_densidade01 > resultado_densidade02;
    resultadoF = resultado_pibpercapita01 > resultado_pibpercapita02;
    resultadoG = resultado_superpower01 > resultado_superpower02;


    printf("população: %.0f\n", resultadoA);
    printf("Area: %.0f\n", resultadoB);
    printf("PIB: %.0f\n", resultadoC);
    printf("Pontos turisticos: %.0f\n", resultadoD);
    printf("Densidade: %.0f\n", resultadoE);
    printf("PIB per capita: %.0f\n", resultadoF);
    printf("Super poder: %.0f\n", resultadoG);


    // retornar aos resultados e fazer as correções necessarias

    return 0;
}
