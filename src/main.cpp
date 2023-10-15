#include "../header/includes.hpp"

using namespace std;

int main(){

    lerArquivo("./data/dados_sanduiches.txt", sanduiche);
    lerArquivo("./data/dados_sucos.txt", suco); 
    lerArquivo("./data/carrinho.txt", carrinho);

    while(true){ //enquanto nao escolher encerrar permanece o loop 

        cout << "\nOla! Voce e cliente ou funcionario?\n" << endl;
        cout << "1 - Funcionario"<< endl;
        cout << "2 - Cliente"<< endl;
        cout << "Digite o numero selecionado e tecle \"Enter\": ";

        int selecao;
        cin >> selecao;

        if (selecao == 1){
            if (!senha()) selecao = 3;
        }

        while (selecao == 1){ //menu funcionário
            
            int selecaoItem;

            cout << "\nSeja bem vindo, funcionario.\nO que voce deseja fazer?\n" << endl;

            listarMenuFuncionario();
            
            cin >> selecaoItem;

            if (selecaoItem == 1 || selecaoItem == 2){ //lista os itens do map selecionado
                cout << "Listando item selecionado:\n";
                if(selecaoItem == 1) listarItem(sanduiche);
                else listarItem(suco);
            } else if (selecaoItem == 3 || selecaoItem == 4){ // Adicionar um item a um dos maps: 3=sanduiche 4=suco
                cout << "Adicionar item selecionado:\n";
                string nome;
                float valor;
                cout << "Nome: ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //limpa o buffer do cin
                getline(cin, nome);
                cout << "Valor: ";
                cin >> valor;
                
                if (selecaoItem == 3) adicionarItem(sanduiche, nome, valor);
                else adicionarItem(suco, nome, valor);                

            } else if (selecaoItem == 5 || selecaoItem == 6){ // Altera o item de um dos maps: 5=sanduiche 6=suco
                string nome;
                float novoValor;
                cout << "Alterando item selecionado:\n";
                cout << "Qual item deseja alterar? ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //limpa o buffer do cin
                getline(cin, nome);
                if (selecaoItem == 5){
                    nome = verificaItem(nome, sanduiche); //verifica se o item inserido pelo usuário está presente no mapa antes de continuar
                    cout << "Novo valor: R$ ";
                    cin >> novoValor;
                    adicionarItem(sanduiche, nome, novoValor);
                } else {
                    nome = verificaItem(nome, suco);
                    cout << "Novo valor: R$ ";
                    cin >> novoValor;
                    adicionarItem(suco, nome, novoValor);
                }

            } else if (selecaoItem == 7 || selecaoItem == 8){ // Exclui o item de um dos maps: 5=sanduiche 6=suco
                string nome;
                cout << "Qual item deseja excluir? ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //limpa o buffer do cin
                getline(cin, nome);
                if (selecaoItem == 7){
                    nome = verificaItem(nome, sanduiche);
                    excluirItem(sanduiche, nome);
                } else {
                    nome = verificaItem(nome, suco);
                    excluirItem(suco, nome);
                }
            } else{
                selecao = 3;
                break;
            }
        }

        while (selecao == 2){ //menu cliente

            int selecaoItem;

            cout << "\nSeja bem vindo, cliente.\nO que voce deseja fazer?\n" << endl;
            
            listarMenuCliente();

            cin >> selecaoItem;

            if (selecaoItem == 1 || selecaoItem == 2){ //lista os elementos do map selecionado
                cout << "Listando item selecionado:\n";
                if(selecaoItem == 1) listarItem(sanduiche);
                else listarItem(suco);

            } else if (selecaoItem == 3 || selecaoItem == 4){ //insere no map "carrinho" o elemento do map selecionado
                int tmp = 1;
                string nome;
                while (tmp == 1){
                    cout << "Qual item deseja adicionar? ";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //limpa o buffer do cin
                    getline(cin, nome);

                    if (selecaoItem == 3){
                        nome = verificaItem(nome, sanduiche);
                        escolherItem(sanduiche, carrinho, nome);
                    } else {
                        nome = verificaItem(nome, suco);
                        escolherItem(suco, carrinho, nome);
                    }
                    cout << "Deseja adicionar outro item? [1 - Sim  |  2 - Nao]\n";
                    cin >> tmp;
                }

            } else if (selecaoItem == 5){ //listar elementos do map carrinho
                listarItem(carrinho);
                totalCarrinho(carrinho);

            } else if (selecaoItem == 6){
                string nome;
                cout << "Qual item deseja excluir? ";
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); //limpa o buffer do cin
                getline(cin, nome);
                listarItem(carrinho);
                nome = verificaItem(nome, carrinho);
                excluirItem(carrinho, nome);

            } else if (selecaoItem == 7){
                listarItem(carrinho);
                totalCarrinho(carrinho);
                cout << "#####################################" << endl;
                cout << "\nPEDIDO FINALIZADO\nAgradecemos a preferencia!\n";
                carrinho.clear();
                salvar();
                break;
            } else{
                selecao = 3;
                break;
            }
        }

        while (selecao > 2){
            int tmp;
            cout << "Deseja sair? [1 - Sim  |  2 - Nao]\n";
            cin >> tmp;
            if (tmp == 1){
                salvar();
                return 0;
            } else {
                selecao = 0 ;
            }
        }
    }
        return 0;
}