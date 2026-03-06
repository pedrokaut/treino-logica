#include <iostream>
#include <cstring> // Para manipulação de strings C-style
#include <vector>  // Para vetor dinâmico

using namespace std;

// Enum para categorias do cardápio
enum Categoria { ENTRADA, PRINCIPAL, SOBREMESA, BEBIDA };

// Enum para status dos pedidos
enum StatusPedido { PENDENTE, EM_PREPARO, PRONTO, ENTREGUE };

// Estrutura para representar um item do cardápio
struct ItemCardapio {
    char* nome;
    char* descricao;
    float preco;
    Categoria categoria;
};

// Estrutura para representar um pedido
struct Pedido {
    int id;
    char* cliente;
    vector<ItemCardapio*> itens; // Ponteiros para itens do cardápio
    StatusPedido status;
};

// Vetores dinâmicos para armazenar o cardápio e os pedidos
vector<ItemCardapio*> cardapio;
vector<Pedido*> pedidos;

// Função para criar um novo item no cardápio
void adicionarItemCardapio(const char* nome, const char* descricao, float preco, Categoria categoria) {
    ItemCardapio* novoItem = new ItemCardapio;
    novoItem->nome = new char[strlen(nome) + 1];
    strcpy(novoItem->nome, nome);
    novoItem->descricao = new char[strlen(descricao) + 1];
    strcpy(novoItem->descricao, descricao);
    novoItem->preco = preco;
    novoItem->categoria = categoria;

    cardapio.push_back(novoItem);
}

// Função para remover um item do cardápio
void removerItemCardapio(const char* nome) {
    for (auto it = cardapio.begin(); it != cardapio.end(); ++it) {
        if (strcmp((*it)->nome, nome) == 0) {
            delete[] (*it)->nome;
            delete[] (*it)->descricao;
            delete *it;
            cardapio.erase(it);
            cout << "Item removido com sucesso.\n";
            return;
        }
    }
    cout << "Item não encontrado.\n";
}

// Função para exibir o cardápio
void exibirCardapio() {
    for (size_t i = 0; i < cardapio.size(); ++i) {
        cout << i + 1 << ". " << cardapio[i]->nome << " - " << cardapio[i]->descricao 
             << " - R$" << cardapio[i]->preco << "\n";
    }
}

// Função para criar um novo pedido
void criarPedido(int id, const char* cliente) {
    Pedido* novoPedido = new Pedido;
    novoPedido->id = id;
    novoPedido->cliente = new char[strlen(cliente) + 1];
    strcpy(novoPedido->cliente, cliente);
    novoPedido->status = PENDENTE;

    pedidos.push_back(novoPedido);
}

// Função para adicionar itens a um pedido
void adicionarItemAoPedido(int idPedido, const char* nomeItem) {
    for (auto& pedido : pedidos) {
        if (pedido->id == idPedido) {
            for (auto& item : cardapio) {
                if (strcmp(item->nome, nomeItem) == 0) {
                    pedido->itens.push_back(item);
                    cout << "Item adicionado ao pedido.\n";
                    return;
                }
            }
            cout << "Item não encontrado no cardápio.\n";
            return;
        }
    }
    cout << "Pedido não encontrado.\n";
}

// Função para alterar o status de um pedido
void alterarStatusPedido(int idPedido, StatusPedido novoStatus) {
    for (auto& pedido : pedidos) {
        if (pedido->id == idPedido) {
            pedido->status = novoStatus;
            cout << "Status do pedido atualizado.\n";
            return;
        }
    }
    cout << "Pedido não encontrado.\n";
}

// Função para exibir os pedidos
void exibirPedidos() {
    for (auto& pedido : pedidos) {
        cout << "ID: " << pedido->id << ", Cliente: " << pedido->cliente 
             << ", Status: " << pedido->status << "\nItens:\n";
        for (auto& item : pedido->itens) {
            cout << "- " << item->nome << "\n";
        }
        cout << "\n";
    }
}

// Limpeza da memória alocada dinamicamente
void limparMemoria() {
    for (auto& item : cardapio) {
        delete[] item->nome;
        delete[] item->descricao;
        delete item;
    }
    
    for (auto& pedido : pedidos) {
        delete[] pedido->cliente;
        delete pedido;
    }
}

int main() {
    // Exemplo de uso do sistema
    adicionarItemCardapio("Pizza", "Deliciosa pizza de queijo", 25.50, PRINCIPAL);
    adicionarItemCardapio("Coca-Cola", "Refrigerante gelado", 5.00, BEBIDA);

    criarPedido(1, "João");
    adicionarItemAoPedido(1, "Pizza");
    
    exibirCardapio();
    
    alterarStatusPedido(1, EM_PREPARO);
    
    exibirPedidos();

    limparMemoria();
    
    return 0;
}
