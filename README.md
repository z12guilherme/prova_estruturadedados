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

📁 prova_estruturadedados
├── 📂 src
│ ├── prova.c # Código-fonte principal
│ └── prova.exe # Executável gerado (Windows)
├── Enunciado 2ª VERIFICAÇÃO DE APRENDIZAGEM.ini
└── README.md # Documentação do projeto

yaml
Copiar código

---

## ⚙️ Como Compilar e Executar

### 🧩 1️⃣ Clone o repositório
```bash
git clone https://github.com/z12guilherme/prova_estruturadedados
cd prova_estruturadedados/src
⚙️ 2️⃣ Compile o código
No terminal, execute o comando:

bash
Copiar código
gcc prova.c -o prova
🚀 3️⃣ Execute o programa
bash
Copiar código
./prova        # Linux / macOS
prova.exe      # Windows
👥 Autores
Nome	Função
Marcos Guilherme Oliveira Lima	Desenvolvimento, documentação e demonstração
Michele Félix de Lima	Desenvolvimento, testes e apresentação
