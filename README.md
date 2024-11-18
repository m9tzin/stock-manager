## Stock Manager (Gerenciador de Estoque - Otimizando entregas)
### Autores:
- Gabriel Sales Gerardo (202201623)
- João Pedro da Costa Reis (202206124)
- Matheus Sousa Marinho (202206132)

<!-- IDEIA -->
A ideia é gerenciar um estoque de maneira a otimizar a produção de uma empresa de logística. O sistema em si organiza as mercadorias conforme chegam, classificando-as com base em alguns critérios e armazenando em uma lista de prioridade. Através de estruturas de dados, é feita uma ordenação dando prioridade as que devem serem despachadas a fim de otimizar tanto o prazo da entrega como os custos referente ao transporte.
<!-- ROADMAP -->
## Roadmap
- [x] Criação do repositório
- [x] Identificar as estruturas de dados a serem utilizadas
- [x] Implementar estruturas de dados e bibliotecas
- [x] Planejamento da logica de comparação das mercadorias
- [x] Interface de interação com usuário
- [x] Função para remover produtos by ID
- [ ] Verificações de inputs inválidos
- [x] Função compararProdutos();
- [x] Função ordenarProdutos(); 
- [ ] Verificação dos IDs inseridos

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


