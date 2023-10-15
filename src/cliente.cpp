#include "../header/includes.hpp"

//funcoes inerentes apenas aos clientes

using namespace std;

void listarMenuCliente(){
    cout << "1 - Listar todos os sanduiches cadastrados" << endl;
    cout << "2 - Listar todos os sucos cadastrados" << endl;
    cout << "3 - Escolher Sanduiche" << endl;
    cout << "4 - Escolher Suco" << endl;
    cout << "5 - Ver carrinho" << endl;
    cout << "6 - Excluir um item do carrinho" << endl;
    cout << "7 - Finalizar pedido" << endl;
    cout << "8 - Sair" << endl;

    cout << "\nDigite o numero selecionado e tecle \"Enter\": ";
}

void escolherItem(map<string, float> &itemEscolhido, map<string, float> &carrinho, string nome){ 
    carrinho[nome] =+ itemEscolhido[nome];
    listarItem(carrinho);
    totalCarrinho(carrinho);
} //insere os elementos do map escolhido no map carrinho

void totalCarrinho(map<string, float> &item){
    float total;
    map<string, float>::iterator it;
    for(const auto& par : item) {
        total += par.second;
    }
    cout << "Total: R$" << total << endl;
} // soma o segundo parametro de cada elemento no map selecionado, nesse caso os valores float