#include <stdio.h>

// declaracao de variáveis
int main(){
char estado[20];
char codigo[5];
char nome[20];
int populacao;
float area;
float pib;
int npt;
float densipop1;
float pibc1;

char estado2[20];
char codigo2[5];
char nome2[20];
int populacao2;
float area2;
float pib2;
int npt2;
float densipop2;
float pibc2;

//insercao de dados

printf("Digite os valores da primeira carta \n");
printf("Digite o estado: ");
scanf("%s", &estado);

printf("Digite o código do estado: ");
scanf("%s", &codigo);

printf("Digite o nome da ciade: ");
scanf("%s", &nome);

printf("Digite a população: ");
scanf("%d", &populacao);

printf("Digite a área em Km²: ");
scanf("%f", &area);

printf("Digite o PIB: ");
scanf("%f", &pib);

printf("Digite o números de pontos turísticos: ");
scanf("%d", &npt);

densipop1 =(float) populacao / area;
pibc1 = (float)pib / populacao;


printf("Digite os valores da segunda carta \n");
printf("Digite o estado: ");
scanf("%s", &estado2);

printf("Digite o código do estado: ");
scanf("%s", &codigo2);

printf("Digite o nome da ciade: ");
scanf("%s", &nome);

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área em Km²: ");
scanf("%f", &area2);

printf("Digite o PIB: ");
scanf("%f", &pib2);

printf("Digite o números de pontos turísticos: ");
scanf("%d", &npt2);

densipop2 = (float) populacao2 / area2;
pibc2 = (float) pib2 / populacao2;

//impressão dos valores
printf("############################ \n");
printf("Carta 1 \n");
printf("Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n", estado, codigo, nome);
printf("Area: %f Km² \n PIB: %f \n Números de pontos turísticos: %d \n", area, pib, npt);
printf("Densidade Populacional: %.2f hab/Km² \n PIB per Capita: %.2f reais \n", densipop1, pibc1);
printf("\n");

printf("############################\n ");
printf("Carta 2\n");
printf("Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n", estado2, codigo2, nome2);
printf("Area: %f Km² \n PIB: %f \n Números de pontos turísticos: %d \n", area2, pib2, npt2);
printf("Densidade Populacional: %.2f hab/Km² \n PIB per Capita: %.2f reais \n", densipop2, pibc2);
printf("\n");

//comparção de cartas

printf("############################\n ");
printf("Comparação de cartas (Atributo: População)");
printf("\n");
printf("Carta1 - %s : %d \n", nome, populacao);  
printf("Carta2 - %s : %d \n", nome2, populacao2); 

if(populacao > populacao2){
        printf("Resultado: Carta1(%s) venceu! \n", nome);
    }else {
        printf("Resultado: Carta2(%s) venceu! \n", nome2);
    }

}