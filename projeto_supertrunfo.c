#include <stdio.h>
int main(){

    //Definição das variáveis para carta 1
    char Estado1;
    char codigodacarta1[20];
    char nomedacidade1[20];
    int populacao1;
    int numerodepontosturisticos1;
    float areaemkm²1;
    float PIB1;
    float densidade1;
    float pibpercapta1;
    float super1;

    //Definição das variáveis para carta 2
    char Estado2;
    char codigodacarta2[20];
    char nomedacidade2[20];
    int populacao2;
    int numerodepontosturisticos2;
    float areaemkm²2;
    float PIB2;
    float densidade2;
    float pibpercapta2;
    float super2;

    //Cadastro da carta 1
    printf("Digite o nome do Estado: \n");
    scanf("%c", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &areaemkm²1);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

    densidade1 = (float) populacao1 / areaemkm²1;
    pibpercapta1 =  (float) PIB1 / populacao1;

    super1 = populacao1 + areaemkm²1 + PIB1 + numerodepontosturisticos1 + pibpercapta1 + (1 / densidade1);

    //Cadastro da carta 2
    printf("Digite o nome do Estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digie a área em km²: \n");
    scanf("%f", &areaemkm²2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);

    densidade2 = (float) populacao2 / areaemkm²2;
    pibpercapta2 = (float) PIB2 / populacao2;

    super2 = populacao2 + areaemkm²2 + PIB2 + numerodepontosturisticos2 + pibpercapta2 + (1 / densidade2);

    //Exibição dos dados da carta 1
    printf("\nCarta1\n");
    printf("O nome do Estado é: %c\n", Estado1);
    printf("O código da carta 1 é: %s\n", codigodacarta1);
    printf("O nome da cidade é: %s\n", nomedacidade1);
    printf("A população é de %d milhões de habitantes\n", populacao1);
    printf("A cidade tem %.2f km²\n", areaemkm²1);
    printf("O valor do PIB é de R$ %.2f bilhões\n", PIB1);
    printf("A cidade tem %d pontos turísticos\n", numerodepontosturisticos1);
    printf("A densidade populacional é: %.2f hab/km²\n", densidade1);
    printf("PIB per capta: %.2f reais\n", pibpercapta1);

    //Exibição dos dados da carta 2
    printf("\nCarta2\n");
    printf("O nome do Estado é: %c\n", Estado2);
    printf("O código da carta 2 é: %s\n", codigodacarta2);
    printf("O nome da cidade é: %s\n", nomedacidade2);
    printf("A população é de %d milhões de habitantes\n", populacao2);
    printf("A cidade tem %.2f km²\n", areaemkm²2);
    printf("O valor do PIB é de R$ %.2f bilhões\n", PIB2);
    printf("A cidade tem %d pontos turísticos\n", numerodepontosturisticos2);
    printf("A densidade populacional é: %.2f hab/km²\n", densidade2);
    printf("PIB per capta: %.2f reais\n", pibpercapta2);



    return 0;
}

