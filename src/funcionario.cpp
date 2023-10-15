#include "../header/includes.hpp"

//funcoes inerentes apenas ao funcionario

using namespace std;

bool senha(){
    int tmp = 1;
    string senha = "admin", usuario="admin";

    cout << "\nSeja bem vindo, funcionario.\nInsira seu usuario e senha:\n" << endl;
    
    while(tmp == 1){
        cout << "Usuário: ";
        cin >> usuario;
        cout << "Senha: ";
        cin >> senha;
        if (usuario == "admin" && senha == "admin"){
            cout << "usuario e senha corretos\n";
            return true;
        } else {
            cout << "Usuario e/ou senha incorretos. Tentar novamente? [1 - Sim  |  2 - Nao]\n";
            cin >> tmp;
            if (tmp > 1) return false;
        }
    }
}

void listarMenuFuncionario(){
    cout << "1 - Listar todos os sanduiches cadastrados" << endl;
    cout << "2 - Listar todos os sucos cadastrados" << endl;
    cout << "3 - Adicionar um novo sanduiche" << endl;
    cout << "4 - Adicionar um novo suco" << endl;
    cout << "5 - Alterar o preco de um sanduiche" << endl;
    cout << "6 - Alterar o preco de um suco" << endl;
    cout << "7 - Excluir um sanduiche" << endl;
    cout << "8 - Excluir um suco" << endl;
    cout << "9 - Sair" << endl;

    cout << "Digite o numero selecionado e tecle \"Enter\": ";
}

void adicionarItem(map<string, float> &item, string nome, float valor){
    item[nome] = valor;
    cout << "\n#####################################" << endl;
    cout << "    Item cadastrado com sucesso!    " << endl;
    cout << "#####################################\n" << endl;
} //insere no map selecionado o nome e o valor informado

void excluirItem(map<string, float> &item, string nome){
    item.erase(nome);
    cout << "\n#####################################" << endl;
    cout << "    Item excluido com sucesso!    " << endl;
    cout << "#####################################\n" << endl;
} //apaga o elemento presente no map selecionado