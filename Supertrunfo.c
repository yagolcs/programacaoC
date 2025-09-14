#include <stdio.h>
 
int main() {
    //Carta 1
    char Estado[50];
    char codigoc[50];
    char cidade[50];
    int população;
    float area;
    float pib;
    int pontos;


//carta 2

    char Estado2[50];
    char codigoc2[50];
    char cidade2[50];
    int população2;
    float area2;
    float pib2;
    int pontos2;

    printf("===Cadastro carta 1===\n");
    printf("Digite o Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o Codigo da carta\n");
    scanf("%s",&codigoc);

    printf("Digite a cidade\n");
    scanf("%s",&cidade);
    
    printf("Digite a população\n");
    scanf("%d",&população);

    printf("Digite a Area\n");
    scanf("%f",&area);

    printf("Digite o Pib\n");
    scanf("%f",&pib);

    printf("Digite os Pontos\n");
    scanf("%d",&pontos);


    //carta 2
    printf("===Cadastro carta 2===\n");
     printf("Digite o Estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o Codigo da carta\n");
    scanf("%s",&codigoc2);

    printf("Digite a cidade\n");
    scanf("%s",&cidade2);
    
    printf("Digite a população\n");
    scanf("%d",&população2);

    printf("Digite a Area\n");
    scanf("%f",&area2);

    printf("Digite o Pib\n");
    scanf("%f",&pib2);

    printf("Digite os Pontos\n");
    scanf("%d",&pontos2);

//visualizar

    printf("Estado: %s \n", Estado);
    printf("codigo: %s \n", codigoc);
    printf("cidade: %s \n", cidade);
    printf("população: %d \n", população);
    printf("area: %f \n", area);
    printf("Pib: %f \n", pib);
    printf("Pontos: %d \n", pontos);

    printf("Estado: %s \n", Estado2);
    printf("codigo: %s \n", codigoc2);
    printf("cidade: %s \n", cidade2);
    printf("população: %d \n", população2);
    printf("area: %f \n", area2);
    printf("Pib: %f \n", pib2);
    printf("Pontos: %d \n", pontos2);


    return 0;


}
