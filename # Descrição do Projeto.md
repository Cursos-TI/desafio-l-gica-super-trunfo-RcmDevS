                                                ##  Nivel Novato ##
## Descrição do Projeto

Este programa foi um desafio feito para comparar duas cidades brasileira com base logica do jogo super trunfo. Utilizando dados propostos estes dados são, estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos. O objetivo principal é calcular a densidade populacional e o PIB per capita, além de permitir a comparação entre as cidades com base na população.

## Funcionalidades

- *Declaração de Variáveis*: O programa declara variáveis que armazenam informações relevantes sobre duas cidades: 
  - Estado (ex: SP para São Paulo e BA para Bahia)
  - Código da carta (ex: A01 e B02)
  - Nome da cidade
  - População
  - Área em km²
  - PIB em bilhões de reais
  - Número de pontos turísticos

- *Cálculos*:
  - Densidade populacional: calculada como a razão entre a população e a área da cidade.
  - PIB per capita: definido como o PIB dividido pela população da cidade.

- *Saída dos Dados*: O programa exibe todas as informações coletadas e calculadas para cada cidade, incluindo:
  - Estado
  - Código
  - Nome da cidade
  - População
  - Área
  - PIB
  - Número de pontos turísticos
  - Densidade populacional
  - PIB per capita

- *Comparação de Cidades*: Após apresentar os dados de ambas as cidades, o programa compara as populações e determina qual cidade "vence" com base nesse critério. Se as populações forem iguais, o programa declara um empate.

## Como Executar

1. *Compilação*: Utilize um compilador de C, como gcc, para compilar o código. O comando pode ser:
   bash
   gcc -o comparacao_cartas comparacao_cartas.c
   

2. *Execução*: Após a compilação, execute o programa gerado:
   bash
   ./comparacao_cartas
   

## Exemplo de Saída

Ao executar o programa, você verá uma saída semelhante a esta:


Carta 1:
Estado: SP
Código: A01
Nome da Cidade: São Paulo
População: 12300000
Área: 1521.11 km²
PIB: 653.30 bilhões de reais
Número de Pontos Turísticos: 13
Densidade Populacional: 8086.92 habitantes/km²
PIB per Capita: 53.16 reais

Carta 2:
Estado: BA
Código: B02
Nome da Cidade: Salvador
População: 14985284
Área: 706.80 km²
PIB: 629.50 bilhões de reais
Número de Pontos Turísticos: 20
Densidade Populacional: 21168.55 habitantes/km²
PIB per Capita: 42.05 reais

Comparação de cartas (Atributo: População):
Carta 1 - São Paulo (SP): 12300000
Carta 2 - Salvador (BA): 14985284
Resultado: Carta 2 (Salvador) venceu!


## Conclusão

Este programa desenvolve a possibilidade para comparar dados de cidades brasileiras de forma simples e clara. Destacando a importância de conhecer as características demográficas e econômicas das cidades, proporcionando uma análise informativa e educativa.
