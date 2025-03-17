#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //Bloco de variáveis referente aos atributos das cartas

    //Variáveis da Carta 1
    char estado1[10], codigoCarta1[5], nomeCidade1[10];
    float populacao1, area1, pib1;
    int pontosTuristicos1;
    float densidadeDemografica1;
    float pibPerCapita1;
    float superPoder1; // soma de todos atributos numéricos.

    //Variáveis da Carta 2
    char estado2[10], codigoCarta2[5], nomeCidade2[10];
    float populacao2, area2, pib2;
    int pontosTuristicos2;
    float densidadeDemografica2;
    float pibPerCapita2;
    float superPoder2; // soma de todos atributos numéricos.

    // Cadastro das Cartas:
    //Função printf utilizada sempre antes da captura de cada dado, para orientar usuário de como proceder.
    //Função scanf realiza a captura dos dados que usuário imputou e guarda na variável.

    //Captura de dados da carta 1
    printf("### Cadastre os dados da Carta 1 ###\n");
    printf("Digite o Estado: \n"); 
    scanf("%s", &estado1);
    printf("Lembrete: o código da carta deve ser a inicial do Estado mais o número da carta, ex:B01\n");
    printf("Digite o código da carta: \n"); 
    scanf("%s", &codigoCarta1);
    printf("Digite o nome da Cidade: \n"); 
    scanf("%s", &nomeCidade1);
    printf("Digite a populção dessa Cidade: \n"); 
    scanf("%f", &populacao1);
    printf("Digite a área dessa Cidade: \n"); 
    scanf("%f", &area1);
    densidadeDemografica1 = populacao1 / area1;
    printf("Digite o PIB dessa Cidade: \n"); 
    scanf("%f", &pib1);
    pibPerCapita1 = pib1 / populacao1;
    printf("Quantos pontos turísticos essa Cidade possui: \n"); 
    scanf("%d", &pontosTuristicos1);
    superPoder1 = populacao1 + area1 + densidadeDemografica1 + pib1 + pontosTuristicos1 + pibPerCapita1; 

    //*******************************
    //Captura de dados da carta 2
    printf("### Cadastre os dados da Carta 2 ###\n");
    printf("Digite o Estado: \n"); 
    scanf("%s", &estado2);
    printf("Lembrete: o código da carta de ser a inicial do País mais o número da carta, ex:B01\n");
    printf("Digite o código da carta: \n"); 
    scanf("%s", &codigoCarta2);
    printf("Digite o nome da Cidade: \n"); 
    scanf("%s", &nomeCidade2);
    printf("Digite a populção dessa Cidade: \n"); 
    scanf("%f", &populacao2);
    printf("Digite a área dessa Cidade: \n"); 
    scanf("%f", &area2);
    densidadeDemografica2 = populacao2 / area2;
    printf("Digite o PIB dessa Cidade: \n"); 
    scanf("%f", &pib2);
    pibPerCapita2 = pib2 / populacao2;
    printf("Quantos pontos turísticos essa Cidade possui: \n"); 
    scanf("%d", &pontosTuristicos2);
    superPoder2 = populacao2 + area2 +  densidadeDemografica2 + pib2 + pontosTuristicos2 + pibPerCapita2;

    // Exibição dos Dados das Cartas:
    //Nesse bloco a função printf irá mostrar os dados capturados referente aos atributos das cartas.

    printf("### CARTA 1 ###\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadeDemografica1);
    printf("Pib per Capita: %.2f\n",pibPerCapita1);
    printf("Super poder: %.2f\n", superPoder1);
      
    printf("### CARTA 2 ###\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadeDemografica2);
    printf("Pib per Capita: %.2f\n",pibPerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    // variável que irá guardar a opção escolhida pelo usuário.
    int escolhaComparacao1;
    int resultado1;
    int escolhaComparacao2;
    int resultado2;
    
    // bloco do menu apresentando para o usuário escolher a primeiro atributo para comparação.
    printf("### Escolha o primeiro atributo para comparação ###\n");
    printf("1. Nomes das Cidades. \n"); // opção exibi o nome das cidades das cartas cadastradas.
    printf("2. População. \n");
    printf("3. Área. \n");
    printf("4. Pib. \n");
    printf("5. Números de pontos turísticos. \n");
    printf("6. Densidade demográfica. \n");
    printf("7. PIB per Capita. \n");
    printf("8. Super Poder. \n");
    scanf("%d", &escolhaComparacao1);
    
    //bloco switch com a lógica de comparação aplicada de acordo com a opção que o usuário escolher
    //Utilizando operador ternário para realizar as comparações.
    switch (escolhaComparacao1)
    {
    case 1:
        printf("Você escolheu o atributo Nomes das Cidades. \n");
        printf("%s x %s ", nomeCidade1, nomeCidade2);
        break;

    case 2:
        printf("Você escolheu o atributo População. \n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 3:
        printf("Você escolheu o atributo Área. \n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

    case 4:
        printf("Você escolheu o atributo PIB. \n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

    case 5:
        printf("Você escolheu o atributo Números de Pontos Turísticos. \n");
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;

    case 6:
        printf("Você escolheu o atributo Densidade Demográfica. \n");
        resultado1 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
        break;

    case 7:
        printf("Você escolheu o atributo PIB per Capita. \n");
        resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
        break;

    case 8:
        printf("Você escolheu o atributo Densidade Demográfica. \n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;
    
    default:
        printf("### Opção inválida! ###");
        break;
        }

   // bloco do menu apresentando para o usuário escolher a segundo atributo para comparação.
   printf("### Escolha o segundo atributo para comparação ###\n");
   printf("1. Nomes das Cidades. \n"); // opção exibi o nome das cidades das cartas cadastradas.
   printf("2. População. \n");
   printf("3. Área. \n");
   printf("4. Pib. \n");
   printf("5. Números de pontos turísticos. \n");
   printf("6. Densidade demográfica. \n");
   printf("7. PIB per Capita. \n");
   printf("8. Super Poder. \n");
   scanf("%d", &escolhaComparacao2);
   
   //bloco switch com a lógica de comparação aplicada de acordo com a opção que o usuário escolher
   //Utilizando operador ternário para realizar as comparações.

   if (escolhaComparacao1 == escolhaComparacao2) {
    printf("Os atributos escolhidos são iguais!!");
   } else {

    switch (escolhaComparacao2)
    {
    case 1:
        printf("Você escolheu o atributo Nomes das Cidades. \n");
        printf("%s x %s ", nomeCidade1, nomeCidade2);
        break;
 
    case 2:
        printf("Você escolheu o atributo População. \n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
 
    case 3:
        printf("Você escolheu o atributo Área. \n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
 
    case 4:
        printf("Você escolheu o atributo PIB. \n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
 
    case 5:
        printf("Você escolheu o atributo Números de Pontos Turísticos. \n");
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;
 
    case 6:
        printf("Você escolheu o atributo Densidade Demográfica. \n");
        resultado1 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
        break;
 
    case 7:
        printf("Você escolheu o atributo PIB per Capita. \n");
        resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
        break;
 
    case 8:
        printf("Você escolheu o atributo Densidade Demográfica. \n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;
    
    default:
        printf("### Opção inválida! ###");
        break;
        }

    
        if (resultado1 && resultado2) {
            printf("A Carta 1 %s foi a vencedora!!", nomeCidade1);
        } else if (resultado1 =! resultado2) {
            printf("Empatou!!");
        } else {
            printf("A Carta 2 %s foi a vencedora!!", nomeCidade2);
        }
   

   }

    
    return 0;
}