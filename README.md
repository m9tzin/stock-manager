# Gerenciador de Estoque
## Algoritmo para otimização de entregas em centros de distribuição

### Autores
- **Matheus Sousa Marinho (202206132)**  
  Escola de Engenharia Elétrica, Mecânica e de Computação  
  Universidade Federal de Goiás, Goiânia, Brasil  
  *E-mail*: matheusmarinho@discente.ufg.br

- **Gabriel Sales Gerardo (202201623)**  
  Escola de Engenharia Elétrica, Mecânica e de Computação  
  Universidade Federal de Goiás, Goiânia, Brasil  
  *E-mail*: gabriel.gerardo@discente.ufg.br

- **João Pedro da Costa Reis (202206124)**  
  Escola de Engenharia Elétrica, Mecânica e de Computação  
  Universidade Federal de Goiás, Goiânia, Brasil  
  *E-mail*: joaoreis2@discente.ufg.br

### Resumo
Com o aumento da demanda por serviços de transporte, especialmente após a pandemia de 2020, as entregas online ganharam destaque. Este relatório descreve um gerenciador de estoque que organiza produtos com base em uma lista encadeada, levando em conta prazos e distâncias, aprimorando o processo de logística. A ferramenta possibilita a inclusão, exclusão, listagem e ordenação de produtos através do algoritmo Merge Sort, que prioriza determinadas entregas. O projeto apresenta uma estratégia eficaz e modular, com capacidade para aprimoramentos futuros. Esta aplicação ilustra o papel crucial dos sistemas inteligentes na administração logística, auxiliando em operações mais rápidas e estratégicas.

**Palavras-chave**: Logística, Otimização, Prioridade, Ordenação, Gestão de Estoque.

## 1. Introdução

O problema a ser estudado envolve o desenvolvimento de um gerenciador de estoque utilizando listas encadeadas e o algoritmo Merge Sort para otimizar o processo de organização e consulta de produtos. Este sistema visa fornecer uma solução eficiente para empresas ou lojas que necessitam gerenciar grandes volumes de itens, permitindo a inserção, remoção, e busca de produtos de forma dinâmica e eficiente, além de otimizar o tempo de organização do estoque. A lista encadeada é particularmente útil para esse tipo de aplicação, pois permite a alocação dinâmica de memória, sem a necessidade de pré-definir a quantidade de itens a serem armazenados, facilitando o ajuste conforme as mudanças na quantidade de produtos em estoque.

Este problema pode ser utilizado em várias situações, como em empresas de pequeno a grande porte, que necessitam de um método eficiente para administrar produtos, prevenindo o desperdício de recursos ao tentar alocar grandes quantidades de memória ou executar buscas ineficazes. Ademais, a aplicação do Merge Sort assegura a otimização do processo de organização do inventário, simplificando a procura e a consulta de dados sobre os produtos.

A bibliografia pertinente a este projeto abrange várias fontes que debatem os benefícios e a aplicação de listas encadeadas, ilustradas na *Figura 1*, e métodos de ordenação como o Merge Sort. Abdala (2011) afirma que "listas encadeadas são a estrutura de dados mais simples concebível, excetuando-se naturalmente os arrays". Esta definição oferece uma fundamentação robusta para compreender a estrutura básica do gerenciador de estoque sugerido. Abdala destaca as vantagens das listas encadeadas sobre os arrays, enfatizando a flexibilidade na alocação dinâmica de memória, crucial para administrar um inventário de produtos que pode mudar ao longo do tempo.

Além disso, uma célula de lista encadeada é composta por dois elementos principais: o dado efetivo e um ponteiro que aponta para o próximo elemento da lista. Essa estrutura é fundamental para organizar os produtos no sistema de gerenciamento de estoque, onde cada nó representa um item. O ponteiro permite a conexão entre os itens, facilitando a navegação e a manipulação da lista. Com essa abordagem, é possível adicionar ou remover itens de forma eficiente, mantendo a integridade da estrutura de dados e garantindo que as operações sejam realizadas de maneira rápida e organizada.
![Linked List](assets/Linked%20List.png)
*Figura 1. Exemplificação de listas simplesmente e duplamente encadeada*

Complementando o entendimento sobre a ordenação dos dados, o artigo de *freeCodeCamp* sobre algoritmos de ordenação esclarece que "o Merge Sort é um algoritmo eficiente para ordenar grandes volumes de dados, com uma complexidade O(n log n), o que o torna ideal para organizar grandes conjuntos de informações", como os encontrados em sistemas de inventário. Esse algoritmo será fundamental para otimizar o processo de organização do estoque, garantindo que a busca e a consulta de produtos sejam realizadas rapidamente, mesmo com o aumento do número de itens.

Adicionalmente, Jim Hearson, em seu artigo sobre gerenciamento de estoque, destaca que "um sistema de gerenciamento de estoque eficiente deve ser capaz de lidar com dados em constante mudança, otimizando a alocação e a organização dos produtos para evitar perdas e garantir que a operação da empresa seja fluida" (Hearson, 2024). Essa citação apoia a necessidade de um sistema dinâmico, como o proposto com listas encadeadas, e a importância de algoritmos de ordenação para manter o estoque sempre organizado e acessível.

O dataset a ser explorado no projeto consiste em uma série de dados fictícios de um estoque de produtos. Cada item do estoque será representado como um nó de uma lista encadeada, contendo as informações essenciais do produto, como ID, distância de entrega e data de entrega. Este dataset simula um cenário realista de uma empresa que precisa organizar e consultar rapidamente seu inventário, garantindo que as operações de inserção, remoção e busca sejam realizadas de forma eficiente.

Para o desenvolvimento deste projeto de gerenciamento de estoque, serão revisados dois métodos principais:

1. **Listas Encadeadas**: Uma estrutura de dados dinâmica que permite a inserção e remoção eficientes de itens em tempo de execução. Esse método será utilizado para armazenar e organizar os produtos no estoque, garantindo que a memória seja alocada conforme necessário e sem a restrição de alocação contígua, como nos arrays.

2. **Merge Sort**: Um algoritmo de ordenação com complexidade O(n log n), que será implementado para organizar os itens no estoque de maneira eficiente. A utilização do Merge Sort será crucial para garantir que a busca e a consulta aos produtos sejam feitas rapidamente, independentemente do número de itens no estoque.

Além disso, para simplificar a implementação e melhorar a modularidade do código, foi criada a biblioteca `libtools.h`, que reúne funções auxiliares e ferramentas necessárias para a leitura de inputs do usuário e a exibição do menu do programa. A biblioteca oferece funções de leitura de dados do tipo "int", "float" e "string", além de garantir que o buffer de entrada seja limpo para evitar a leitura errônea de dados. O uso dessa biblioteca permite que a lógica de negócios do sistema de gerenciamento de estoque seja isolada das complexidades da implementação das estruturas de dados e algoritmos, facilitando a integração e garantindo um código mais organizado e eficiente. Ambos os métodos serão integrados de forma a otimizar a manipulação e a organização do estoque, permitindo uma gestão eficiente dos produtos armazenados.

A avaliação dos resultados será baseada em duas métricas que buscam medir tanto a eficiência do sistema quanto a precisão do gerenciamento de estoque:

- **Precisão e Consistência dos Dados**: A precisão das operações de inserção, remoção e ordenação será avaliada para garantir que o estoque seja gerenciado corretamente. A consistência será verificada a partir de testes que garantem que os itens armazenados na lista correspondem corretamente ao estoque esperado.

- **Benchmarking**: Será realizado um benchmark comparando a implementação do Merge Sort em listas encadeadas com outras abordagens de ordenação, como o Quick Sort e o Bubble Sort, para validar a eficiência do algoritmo escolhido no contexto do gerenciamento de estoque.


## 3. Metodologia
Para o desenvolvimento do gerenciador de estoque, foi seguida uma metodologia estruturada que combina a utilização de listas encadeadas como estrutura de dados, o algoritmo Merge Sort para ordenação eficiente, e a criação de uma biblioteca auxiliar, `libtools.h`, para simplificar as operações de leitura de inputs do usuário e a limpeza do buffer de entrada para evitar problemas com entradas inesperadas ou inválidas.
Para se chegar na solução, foi seguido um fluxo lógico de escolhas e operações para a “montagem” do algoritmo. A tabela 1 mostra as operações básicas oferecidas e a figura 3 ilustra o passo a passo que foi seguido para o concebimento do programa:

| Função | Descrição |
|--------|-----------|
| Inserir Produto | Recebe dados do produto do usuário e insere na lista encadeada |
| Remover Produto | Localiza e remove o produto da lista através do ID |
| Ordenar Lista | Aplica o Merge Sort para ordenar os produtos |
| Exibir Lista | Exibe os produtos do estoque |

*Tabela 1. Resumo das principais operações do sistema*

![Diagrama 1 JPG](assets/Diagrama%201%20JPG.jpg)
*Figura 2. Diagrama dos passos seguidos e escolhas feitas para o algoritmo*

As operações do gerenciador de estoque são baseadas em manipulações de uma lista encadeada, permitindo o gerenciamento dinâmico dos produtos. A inserção de produtos adiciona um novo item no final da lista. Durante esse processo, os dados do produto, como ID, distância e data de entrega, são coletados, e um novo nó é alocado e conectado à estrutura existente. Essa abordagem é eficiente para manter a organização da lista e facilita futuras operações. 

A remoção de produtos permite excluir itens específicos com base no ID. O algoritmo percorre a lista, localiza o nó correspondente e ajusta os ponteiros para preservar a integridade da estrutura após a exclusão. Caso o produto a ser removido esteja no início ou no final da lista, ajustes adicionais são realizados. 

A operação de exibição de produtos percorre a lista do início ao fim, imprimindo as informações armazenadas em cada nó. Isso proporciona uma visão clara e organizada do estoque atual, auxiliando na tomada de decisões gerenciais.

A operação de ordenar produtos no programa utiliza o algoritmo Merge Sort. O processo começa ao comparar os produtos com base em critérios hierárquicos: data de entrega, distância e ID. Esses critérios são avaliados sequencialmente para determinar a ordem. A lista é dividida em partes menores, utilizando ponteiros rápidos e lentos para localizar o ponto médio. Cada segmento é ordenado recursivamente e, em seguida, as sublistas são mescladas. Durante a mesclagem, o programa escolhe os produtos com base no critério de prioridade, ajustando os ponteiros para reconstruir a lista de forma ordenada. A função principal, “ordenarLista”, inicia o processo verificando se a lista contém elementos. Caso positivo, o Merge Sort é chamado para ordenar a lista desde o início. Após a conclusão, a lista é reorganizada de acordo com os critérios definidos, sendo ideal para priorizar entregas no estoque.

Portanto, a metodologia adotada foca na modularidade e na eficiência do sistema, utilizando o Merge Sort para ordenar grandes listas de produtos e a biblioteca `libtools.h` para garantir a flexibilidade e simplificação do código. O funcionamento geral do programa está ilustrado no Apêndice A.


## Referências
1. DELGADO, Maria Betania Darcie Pessoa; DOS SANTOS BARBOSA, Amanda. A logística de entrega como um diferencial competitivo no comércio eletrônico. Congresso de Tecnologia-Fatec Mococa, 2023.
2. ABDALA, Daniel Duarte. *Listas encadeadas*. Disponível em: https://www.facom.ufu.br/~abdala/DAS5102/TEO_ListasEncadeadas.pdf. Acesso em: 19 nov. 2024.
3. FREECODECAMP. *Algoritmos de ordenação explicados*. Disponível em: https://www.freecodecamp.org/portuguese/news/algoritmos-de-ordenacao-explicados-com-exemplos-em-python-java-e-c/. Acesso em: 19 nov. 2024.
4. DIETZ, Paul F. *Maintaining order in a linked list. In: Proceedings of the fourteenth annual ACM symposium on Theory of computing*. 1982. p. 122-127.
5. HEARSON, Jim. *O que é gerenciamento de estoque? Disponível em: https://www.oracle.com/br/scm/inventory-management/what-is-inventory-management/*. Acesso em: 19 nov. 2024.

## Apêndices
### Apêndice A - Diagrama de Blocos que ilustra o funcionamento geral do programa
![Diagrama de Blocos de Funcionamento](assets/Diagrama%20de%20Blocos%20de%20Funcionamento.png)

<!-- SETUP -->
## Setup
### 1. Clone the repository:
```bash 
git clone git@github.com:m9tzin/stock-manager.git
cd stock-manager/src
```
### 2. Compile:
```bash 
gcc -o gerenciar gererenciador.c
```
### 3. Run file:
```bash 
./gerenciar
```

## License
Distributed under the MIT License. See `LICENSE.txt` for more information.


