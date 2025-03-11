#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    //Bloco de variáveis referente aos atributos das cartas

    //Variáveis da Carta 1
    char estado1[10], codigoCarta1[5], nomeCidade1[10];
    float populacao1, area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacao1;
    float pibPerCapita1;
    float superPoder1; // soma de todos atributos numéricos.

    //Variáveis da Carta 2
    char estado2[10], codigoCarta2[5], nomeCidade2[10];
    float populacao2, area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacao2;
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
    densidadePopulacao1 = populacao1 / area1;
    printf("Digite o PIB dessa Cidade: \n"); 
    scanf("%f", &pib1);
    pibPerCapita1 = pib1 / populacao1;
    printf("Quantos pontos turísticos essa Cidade possui: \n"); 
    scanf("%d", &pontosTuristicos1);
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1; 

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
    densidadePopulacao2 = populacao2 / area2;
    printf("Digite o PIB dessa Cidade: \n"); 
    scanf("%f", &pib2);
    pibPerCapita2 = pib2 / populacao2;
    printf("Quantos pontos turísticos essa Cidade possui: \n"); 
    scanf("%d", &pontosTuristicos2);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2;

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
    printf("Densidade Populacional: %.2f\n", densidadePopulacao1);
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
    printf("Densidade Populacional: %.2f\n", densidadePopulacao2);
    printf("Pib per Capita: %.2f\n",pibPerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    // variável que irá guardar a opção escolhida pelo usuário.
    int escolhaComparacao;

    // bloco do menu apresentando para o usuário as opções disoiníveis para comparação.
    printf("### Escolha a opção para comparar as Cartas ###\n");
    printf("1. Nome das Cidades \n"); // opção exibi o nome das cidades das cartas cadastradas.
    printf("2. População \n");
    printf("3. Área \n");
    printf("4. Pib \n");
    printf("5. Números de pontos turísticos \n");
    printf("6. Densidade demográfica \n");
    scanf("%d", &escolhaComparacao);
     
    //bloco switch com a lógica de comparação aplicada de acordo com a opção que o usuário escolher
    switch (escolhaComparacao)
    {
    case 1:
        printf("Nome das cidades: %s x %s ", nomeCidade1, nomeCidade2);
        break;

    case 2:
        if (populacao1 > populacao2) {
        printf("População: Carta 1 (%s) venceu.\n", nomeCidade1);
        } else if (populacao1 == populacao2) {
        printf("População: Empatou!\n");
        } else {
        printf("População: Carta 2 (%s) venceu.\n", nomeCidade2);     
        };
        break;

    case 3:
        if (area1 > area2) {
        printf("Área: Carta 1 (%s) venceu.\n", nomeCidade1);
        } else if (area1 == area2) {
        printf("Área: Empatou!\n");
        } else {
        printf("Área: Carta 2 (%s) venceu.\n", nomeCidade2);
        };
        break;

    case 4:
        if (pib1 > pib2) {
        printf("PIB: Carta 1 (%s) venceu.\n", nomeCidade1);
        } else if (pib1 == pib2) {
        printf("PIB: Empatou!\n");
        } else {
        printf("PIB: Carta 2 (%S) venceu.\n", nomeCidade2);
        };
        break;

    case 5:
        if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos turísticos: Carta 1 (%s) venceu.\n", nomeCidade1);
        } else if (pontosTuristicos1 == pontosTuristicos2) {
        printf("Pontos turísticos: Empatou!\n");
        } else {
        printf("Pontos turísticos: Carta 2 (%s) venceu.\n", nomeCidade2);
        };
        break;

    case 6:
        if (densidadeDemografica1 < densidadeDemografica2) {
        printf("Densidade demográfica: Carta 1 (%s) venceu.\n", nomeCidade1);
        } else if(densidadeDemografica1 == densidadeDemografica2) {
        printf("Densidade demográfica: Empatou!\n");
        } else {
        printf("Densidade demográfica: Carta 2 (%s) venceu.\n", nomeCidade2);
        };
        break;
    
    default:
        printf("### Opção inválida! ###");
        break;
        }

    /*
    if (pibPerCapita1 > pibPerCapita2) {
        printf("População: Carta 1 (%s) venceu.\n", nomeCidade1);
    } else {
        printf("População: Carta 2 (%s) venceu.\n", nomeCidade2);
    };

    //**************************************************************

    if (superPoder1 > superPoder2) {
        printf("População: Carta 1 (%s) venceu.\n", nomeCidade1);
    } else {
        printf("População: Carta 2 (%s) venceu.\n", nomeCidade2);
    };
    */
    
    return 0;
}