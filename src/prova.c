//------------------------------------------------------------------------------------------
// 2ª VERIFICAÇÃO DE APRENDIZAGEM
// PROJETO: Sistema de Cadastro de Alunos usando Lista Ligada em C
//------------------------------------------------------------------------------------------
//
// Objetivo:
// Criar um sistema dinâmico para armazenar, manipular e organizar informações de alunos,
// utilizando lista ligada para que os dados possam ser inseridos e removidos sem tamanho fixo.
//
// Operações disponíveis:
// 1. Inserir aluno no início da lista
// 2. Inserir aluno no final da lista
// 3. Remover aluno pela matrícula
// 4. Buscar aluno pela matrícula
// 5. Exibir lista completa de alunos
// 6. Calcular média das notas
// 7. Ordenar lista por nome ou nota
//
//------------------------------------------------------------------------------------------
// Aluno: Marcos Guilherme Oliveira Lima e Michele Lima
// Matrículas: 200788260 e 200788849
// Compilador: GCC (MinGW-w64)
// Comando para compilar: gcc -o prova prova.c
//------------------------------------------------------------------------------------------

//Marcos Guilherme

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//------------------------------------------------------------------------------------------
// ESTRUTURA DO ALUNO
//------------------------------------------------------------------------------------------
// Cada nó da lista contém os dados de um aluno e um ponteiro para o próximo elemento.
typedef struct Aluno {
    int matricula;            // Identificador único do aluno
    char nome[50];            // Nome completo do aluno
    float nota;               // Nota final
    struct Aluno* prox;       // Ponteiro para o próximo aluno da lista
} Aluno;

//------------------------------------------------------------------------------------------
// FUNÇÃO: Criar um novo aluno
//------------------------------------------------------------------------------------------
// Aloca memória dinamicamente, preenche os campos e retorna o ponteiro para o novo aluno.
Aluno* criarAluno(int matricula, char nome[], float nota) {
    Aluno* novo = (Aluno*)malloc(sizeof(Aluno));
    if (!novo) {
        printf("Erro ao alocar memória!\n");
        return NULL;
    }
    novo->matricula = matricula;
    strcpy(novo->nome, nome);
    novo->nota = nota;
    novo->prox = NULL; // O novo aluno começa sem apontar para ninguém
    return novo;
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Verifica se uma matrícula já está cadastrada
//------------------------------------------------------------------------------------------
// Percorre a lista comparando o número de matrícula de cada aluno.
// Retorna 1 se a matrícula existir, ou 0 caso contrário.
int matriculaExiste(Aluno* lista, int matricula) {
    Aluno* aux = lista;
    while (aux != NULL) {
        if (aux->matricula == matricula) {
            return 1; // Matrícula encontrada
        }
        aux = aux->prox;
    }
    return 0; // Matrícula não encontrada
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Inserir aluno no início da lista
//------------------------------------------------------------------------------------------
// Cria um novo nó e o insere antes do primeiro elemento atual.
void inserirInicio(Aluno** lista, int matricula, char nome[], float nota) {
    if (matriculaExiste(*lista, matricula)) {
        printf("Erro: Matrícula já cadastrada!\n");
        return;
    }
    Aluno* novo = criarAluno(matricula, nome, nota);
    if (novo) {
        novo->prox = *lista; // Novo nó aponta para o antigo início
        *lista = novo;       // Novo nó vira o primeiro da lista
    }
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Inserir aluno no final da lista
//------------------------------------------------------------------------------------------
// Percorre até o último nó e adiciona o novo aluno no fim.
void inserirFim(Aluno** lista, int matricula, char nome[], float nota) {
    if (matriculaExiste(*lista, matricula)) {
        printf("Erro: Matrícula já cadastrada!\n");
        return;
    }
    Aluno* novo = criarAluno(matricula, nome, nota);
    if (!novo) return;

    // Caso a lista esteja vazia, o novo aluno será o primeiro
    if (*lista == NULL) {
        *lista = novo;
    } else {
        Aluno* aux = *lista;
        while (aux->prox != NULL) aux = aux->prox;
        aux->prox = novo; // O último aluno agora aponta para o novo
    }
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Buscar aluno pela matrícula
//------------------------------------------------------------------------------------------
// Retorna o ponteiro para o aluno encontrado ou NULL se não existir.
Aluno* buscarAluno(Aluno* lista, int matricula) {
    Aluno* aux = lista;
    while (aux != NULL) {
        if (aux->matricula == matricula) {
            return aux;
        }
        aux = aux->prox;
    }
    return NULL;
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Remover aluno pela matrícula
//------------------------------------------------------------------------------------------
// Percorre a lista até achar o aluno com a matrícula informada e remove o nó.
void removerAluno(Aluno** lista, int matricula) {
    if (*lista == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    Aluno* aux = *lista;
    Aluno* ant = NULL;

    // Procura o aluno a ser removido
    while (aux != NULL && aux->matricula != matricula) {
        ant = aux;
        aux = aux->prox;
    }

    // Caso a matrícula não exista
    if (aux == NULL) {
        printf("Aluno não encontrado.\n");
        return;
    }

    // Se for o primeiro aluno da lista
    if (ant == NULL) {
        *lista = aux->prox;
    } else {
        ant->prox = aux->prox;
    }

    free(aux); // Libera a memória do aluno removido
    printf("Aluno removido com sucesso.\n");
}

//-- Michele Lima--//

//------------------------------------------------------------------------------------------
// FUNÇÃO: Exibir todos os alunos da lista
//------------------------------------------------------------------------------------------
void exibirLista(Aluno* lista) {
    if (lista == NULL) {
        printf("Lista vazia!\n");
        return;
    }
    printf("Lista de alunos:\n");
    while (lista != NULL) {
        printf("Matrícula: %d | Nome: %s | Nota: %.2f\n", lista->matricula, lista->nome, lista->nota);
        lista = lista->prox;
    }
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Calcular média das notas
//------------------------------------------------------------------------------------------
void calcularMedia(Aluno* lista) {
    if (lista == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    int cont = 0;
    float soma = 0;
    Aluno* aux = lista;

    while (aux != NULL) {
        soma += aux->nota;
        cont++;
        aux = aux->prox;
    }

    printf("Média das notas: %.2f\n", soma / cont);
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Trocar dados entre dois alunos
//------------------------------------------------------------------------------------------
// Auxiliar usada na ordenação. Troca todos os campos de dois nós.
void trocarDados(Aluno* a, Aluno* b) {
    int tempMatricula = a->matricula;
    char tempNome[50];
    strcpy(tempNome, a->nome);
    float tempNota = a->nota;

    a->matricula = b->matricula;
    strcpy(a->nome, b->nome);
    a->nota = b->nota;

    b->matricula = tempMatricula;
    strcpy(b->nome, tempNome);
    b->nota = tempNota;
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Ordenar lista (por nome ou nota)
//------------------------------------------------------------------------------------------
// Utiliza o método Bubble Sort para reorganizar a lista.
// Critério 1 = Nome (ordem alfabética)
// Critério 2 = Nota (da maior para a menor)
void ordenarLista(Aluno* lista, int criterio) {
    if (lista == NULL) {
        printf("Lista vazia!\n");
        return;
    }

    int trocado;
    Aluno* ptr1;
    Aluno* lptr = NULL;

    // Bubble sort adaptado para lista ligada
    do {
        trocado = 0;
        ptr1 = lista;

        while (ptr1->prox != lptr) {
            int comparar = 0;

            // Escolha do critério de comparação
            if (criterio == 1)
                comparar = strcmp(ptr1->nome, ptr1->prox->nome) > 0;
            else
                comparar = ptr1->nota < ptr1->prox->nota;

            if (comparar) {
                trocarDados(ptr1, ptr1->prox);
                trocado = 1;
            }
            ptr1 = ptr1->prox;
        }
        lptr = ptr1;
    } while (trocado);

    printf("Lista ordenada!\n");
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Liberar memória da lista
//------------------------------------------------------------------------------------------
// Percorre a lista liberando todos os nós alocados dinamicamente.
void liberarLista(Aluno** lista) {
    Aluno* aux;
    while (*lista != NULL) {
        aux = *lista;
        *lista = (*lista)->prox;
        free(aux);
    }
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Exibir o menu principal
//------------------------------------------------------------------------------------------
// Exibe as opções disponíveis e retorna a escolha do usuário.
int menu() {
    int opcao;
    printf("\n--- Sistema de Cadastro de Alunos ---\n");
    printf("1. Inserir aluno no início\n");
    printf("2. Inserir aluno no final\n");
    printf("3. Remover aluno por matrícula\n");
    printf("4. Buscar aluno por matrícula\n");
    printf("5. Exibir lista de alunos\n");
    printf("6. Calcular média das notas\n");
    printf("7. Ordenar lista\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    getchar(); // Limpa o buffer do teclado
    return opcao;
}

//------------------------------------------------------------------------------------------
// FUNÇÃO: Coletar dados de um aluno
//------------------------------------------------------------------------------------------
// Lê matrícula, nome e nota digitados pelo usuário.
void dadosAluno(int* matricula, char* nome, float* nota) {
    printf("Matrícula: ");
    scanf("%d", matricula);
    getchar(); // Limpa o ENTER do buffer
    printf("Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n' final
    printf("Nota: ");
    scanf("%f", nota);
}

//------------------------------------------------------------------------------------------
// FUNÇÃO PRINCIPAL
//------------------------------------------------------------------------------------------
// Controla o fluxo do programa e chama as funções conforme a opção do menu.
int main() {
    Aluno* lista = NULL;   // Ponteiro para o início da lista
    int opcao, matricula, criterio;
    char nome[50];
    float nota;

    do {
        opcao = menu();

        switch(opcao) {
            case 1:
                dadosAluno(&matricula, nome, &nota);
                inserirInicio(&lista, matricula, nome, nota);
                break;

            case 2:
                dadosAluno(&matricula, nome, &nota);
                inserirFim(&lista, matricula, nome, nota);
                break;

            case 3:
                printf("Matrícula do aluno a remover: ");
                scanf("%d", &matricula);
                removerAluno(&lista, matricula);
                break;

            case 4:
                printf("Matrícula do aluno a buscar: ");
                scanf("%d", &matricula);
                Aluno* alunoEncontrado = buscarAluno(lista, matricula);
                if (alunoEncontrado != NULL) {
                    printf("Aluno encontrado:\n");
                    printf("Matrícula: %d | Nome: %s | Nota: %.2f\n",
                           alunoEncontrado->matricula,
                           alunoEncontrado->nome,
                           alunoEncontrado->nota);
                } else {
                    printf("Aluno não encontrado.\n");
                }
                break;

            case 5:
                exibirLista(lista);
                break;

            case 6:
                calcularMedia(lista);
                break;

            case 7:
                printf("Ordenar por: 1-Nome, 2-Nota: ");
                scanf("%d", &criterio);
                ordenarLista(lista, criterio);
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while(opcao != 0);

    // Libera toda a memória antes de encerrar o programa
    liberarLista(&lista);

    return 0;
}
