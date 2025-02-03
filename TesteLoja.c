#include <stdio.h>
#include <string.h>

struct Produto {
    int id;
    char nome[50];
    float preco;
    int estoque;
};

struct Cliente {
    int id;
    char nome[50];
    char email[50];
};
struct Carrinho {
    int idProduto;
    int quatidade;
};

struct Pedido {
    int idCliente;
    struct carrinho itens[10];
    int totalitens;
};

struct Loja {
    struct Produto produtos[100];
    struct Cliente clientes[100];
    int totalprodutos;
    int totalclientes;
};

void adicionarprodutos(struct loja *loja, int id, char nome[], float preco, int estoque){
    struct produto p;
    p.id = id;
    strcpy(p.nome, nome);
    p.preco = preco;
    p.estoque = estoque;
    loja->produtos[loja->totalprodutos] = p;
    loja->totalprodutos++;
}

void adicinarclientes(struct loja *loja, int id, char nome[], char email[]) {
    struct cliente c;
    c.id = id;
    strcpy(c.nome, nome);
    strcpy(c.email, email);
    loja->clientes[loja->totalclientes] = c;
    loja->totalclientes++;
}

void exibirprodutos(struct loja loja) {
    printf("Produtos Disponiveis:\n");
    for (int i = 0; i < loja.totalprodutos; i++) {
        printf("ID: %d | Nome: %s | Preço: %.2f | Estoque: %d\n", loja.produtos[i].id, loja.produtos[i].nome, loja.produtos[i].preco, loja.produtos[i].estoque);
    }
}
int main() {
    struct Loja loja;
    loja.totalprodutos = 0;
    loja.totalclientes = 0;
     adicinarproduto(&loja, 1, "notebook", 3500, 10);
     adicinarprodutos(&loja, 2, "mouse", 50.00, 200);

     adicinarclientes(&loja, 1, "João Silva", "joao@gmail.com");
     adicinarclientes(&loja, 2, "Maria Souza", "maria@gmail.com");

     exibirprodutos(loja);

    return 0
}