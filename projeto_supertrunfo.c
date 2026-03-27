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

    //Definição das variáveis para carta 2
    char Estado2;
    char codigodacarta2[20];
    char nomedacidade2[20];
    int populacao2;
    int numerodepontosturisticos2;
    float areaemkm²2;
    float PIB2;

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



}

