# Sistema de Cadastro de Alunos em C

Este é um projeto acadêmico desenvolvido para a disciplina de Estrutura de Dados, que consiste em um sistema de gerenciamento de alunos implementado na linguagem C, utilizando listas ligadas para armazenar os dados de forma dinâmica.

Alunos: Marcos Guilherme Oliveira Lima e Michele Lima
Professor: Robson Medeiros

## 📖 Descrição do Projeto

O sistema permite o cadastro, manipulação e organização de informações de alunos. Cada aluno possui os seguintes dados:
- **Matrícula**: (inteiro) - Identificador único do aluno.
- **Nome**: (string) - Nome completo do aluno.
- **Nota final**: (float) - Nota final do aluno na disciplina.

A principal estrutura de dados utilizada é a **lista ligada**, que permite a alocação dinâmica de memória e a manipulação eficiente dos registros de alunos.
Para a demonstração do programa, foi feito um vídeo com a participação dos dois alunos. [**Assista à demonstração aqui!**](https://youtu.be/NwEw2PUqUqw).

## ✨ Funcionalidades

O sistema oferece um menu interativo com as seguintes operações:

1.  **Inserir no Início**: Adiciona um novo aluno no começo da lista.
2.  **Inserir no Final**: Adiciona um novo aluno no final da lista.
3.  **Remover Aluno**: Remove um aluno da lista a partir de sua matrícula.
4.  **Buscar Aluno**: Procura por um aluno específico usando a matrícula e exibe seus dados.
5.  **Exibir Todos**: Mostra a lista completa de todos os alunos cadastrados.
6.  **Calcular Média**: Calcula e exibe a média aritmética das notas de todos os alunos.
7.  **Ordenar Lista**: Organiza a lista de alunos em ordem alfabética (pelo nome) ou por nota (em ordem crescente), conforme a escolha do usuário.

## 🛠️ Requisitos Técnicos

## 📂 Estrutura de Arquivos

O repositório está organizado da seguinte forma:

-   `src/prova.c`: Arquivo principal do código-fonte em C. Contém toda a lógica do programa, incluindo a definição da `struct`, as funções de manipulação da lista ligada e a função `main` que executa o menu interativo.
-   `src/prova`: Arquivo .exe criado ao compilar o código-fonte prova.c
-   `Enunciado 2ª VERIFICAÇÃO DE APRENDIZAGEM.ini: Enunciado da Questão
-   `README.md`: Arquivo de documentação do projeto (este arquivo).

- **Linguagem**: O projeto foi desenvolvido inteiramente em **C**.
- **Modularidade**: O código é organizado em funções específicas para cada uma das operações, promovendo a legibilidade e a manutenção.
- **Tratamento de Erros**: O sistema lida adequadamente com casos especiais, como operações em uma lista vazia.
- **Interface**: Apresenta um menu de console interativo para que o usuário possa escolher a operação desejada.

## ⚙️ Como Compilar e Executar

Para compilar e executar o projeto, você precisará de um compilador C (como o GCC).

1.  **Clone o repositório (ou baixe os arquivos):**
    ```bash
    git clone https://github.com/z12guilherme/prova_estruturadedados
    cd prova_estruturadedados
    ```

2.  **Compile o código-fonte:**
    Abra o terminal e execute o comando de compilação: 
    gcc C:\mingw64\bin\gcc prova.c -o prova

3.  **Execute o programa:**
    Após a compilação bem-sucedida, um arquivo executável chamado `prova` (ou `prova.exe` no Windows) será criado. Para iniciar o sistema, execute:
    ```bash
    prova
    ```

## 👥 Autores

Este projeto foi desenvolvido por:
- Marcos Guilherme Oliveira Lima
- Michele Félix de Lima

---
*Este README foi gerado com base nas especificações do projeto.*


