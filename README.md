<h1 align="center">📚 Sistema de Cadastro de Alunos em C</h1>

<p align="center">
  <b>Projeto acadêmico desenvolvido para a disciplina de Estrutura de Dados</b><br>
  Utilizando <code>listas ligadas</code> para o gerenciamento dinâmico de informações de alunos.
</p>

<p align="center">
  <a href="https://youtu.be/NwEw2PUqUqw"><img src="https://img.shields.io/badge/🎥%20Assista%20à%20Demonstração-YouTube-red?style=for-the-badge"></a>
</p>

---

## 📖 Sobre o Projeto

O **Sistema de Cadastro de Alunos** é uma aplicação em **C** que permite o gerenciamento de dados de alunos de forma dinâmica, utilizando **listas ligadas**.  
O programa possibilita **cadastrar**, **consultar**, **remover**, **ordenar** e **calcular médias** de alunos através de um menu interativo no terminal.

### 👨‍🏫 Informações Acadêmicas
- **Disciplina:** Estrutura de Dados  
- **Professor:** Robson Medeiros  
- **Alunos:**  
  - Marcos Guilherme Oliveira Lima  
  - Michele Félix de Lima  

---

## 🧩 Estrutura de Dados

Cada aluno possui os seguintes atributos:
- 📘 **Matrícula** → Identificador único *(inteiro)*  
- 🧍‍♂️ **Nome** → Nome completo *(string)*  
- 🧮 **Nota final** → Nota obtida na disciplina *(float)*  

A principal estrutura utilizada é a **lista ligada**, que oferece:
- Alocação dinâmica de memória  
- Inserção e remoção eficientes  
- Flexibilidade no tamanho da lista  

---

## ✨ Funcionalidades

O sistema apresenta um menu interativo com as seguintes operações:

| # | Função | Descrição |
|---|--------|------------|
| 1️⃣ | **Inserir no Início** | Adiciona um novo aluno no começo da lista |
| 2️⃣ | **Inserir no Final** | Adiciona um novo aluno no final da lista |
| 3️⃣ | **Remover Aluno** | Remove um aluno pela matrícula |
| 4️⃣ | **Buscar Aluno** | Procura um aluno e exibe seus dados |
| 5️⃣ | **Exibir Todos** | Lista todos os alunos cadastrados |
| 6️⃣ | **Calcular Média** | Exibe a média das notas de todos os alunos |
| 7️⃣ | **Ordenar Lista** | Ordena por nome (A–Z) ou por nota (crescente) |

---

## 🛠️ Requisitos Técnicos

- **Linguagem:** C  
- **Compilador:** GCC (MinGW, Linux ou outro compatível)  
- **Sistema Operacional:** Windows, Linux ou macOS  
- **Interface:** Terminal (modo texto)  

---

## 📂 Estrutura do Repositório

```bash
📁 prova_estruturadedados
├── 📂 src
│   ├── prova.c          # Código-fonte principal
│   └── prova.exe        # Executável gerado (Windows)
├── Enunciado 2ª VERIFICAÇÃO DE APRENDIZAGEM.ini
└── README.md            # Documentação do projeto
````

---

## ⚙️ Como Executar

### 🧩 1️⃣ Clonar o Repositório

Primeiro, clone o repositório para o seu ambiente local.
No terminal, execute:

```bash
git clone https://github.com/z12guilherme/prova_estruturadedados
cd prova_estruturadedados/src
```

---

### ⚙️ 2️⃣ Compilar o Código

Após navegar até o diretório `src`, compile o código-fonte usando o compilador GCC:

```bash
gcc prova.c -o prova
```

---

### 🚀 3️⃣ Executar o Programa

Com o código compilado, execute o programa de acordo com seu sistema operacional:

```bash
./prova        # Para sistemas Linux / macOS
prova.exe      # Para sistemas Windows
```

---

## 👥 Autores

| Nome                               | Função                                       |
| ---------------------------------- | -------------------------------------------- |
| **Marcos Guilherme Oliveira Lima** | Desenvolvimento, documentação e demonstração |
| **Michele Félix de Lima**          | Desenvolvimento, testes e apresentação       |

---

<p align="center">
  <i>“A programação é a arte de ensinar o computador a pensar como você.” 💡</i>
</p>

<p align="center">
  <b>Desenvolvido para a disciplina de Estrutura de Dados</b>
</p>
```

---


