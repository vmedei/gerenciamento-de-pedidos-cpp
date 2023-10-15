#include "../header/includes.hpp"

//funcoes inerentes a qualquer usuario

using namespace std;

map<string, float> sanduiche;
map<string, float> suco;
map<string, float> carrinho;

void lerArquivo(string nomeArquivo, map<std::string, float> &dados) {
    vector<string> linhas;
    fstream arquivo;
    string temp;

    arquivo.open(nomeArquivo, ios::in); //abre os respectivos arquivos "dados_x.txt"

    while(getline(arquivo, temp)){ //armazena os dados do arquivo aberto na string "temp"
        linhas.push_back(temp);
    }

    arquivo.close(); //fecha o arquivo

    if(linhas.empty()){
        std::cout << "Arquivo vazio" << endl;
    } else {
        for(size_t i = 0; i < linhas.size(); i+=2){
            dados[linhas[i]] = stof(linhas[i+1]);
        }
    } //se a string não estiver vazia, armazena as informações dela nos respectivos maps
}

void salvarArquivo(string nomeArquivo, map<string, float> &dados){
    
    fstream arquivo;
    arquivo.open(nomeArquivo, ios::out);

    for(const auto &par : dados){ 
        arquivo << par.first << endl;
        arquivo << par.second << endl;
    }
    arquivo.close();
}

void listarItem(map<string, float> &item){
    cout << "Exibindo itens do produto selecionado:";
    map<string, float>::iterator it;
        cout << "\n#####################################" << endl;
        for(it = item.begin(); it != item.end(); it++){ 
            cout << "Nome: " << it->first << endl;
            cout << "Valor: R$" << it->second << endl;
            cout << "#####################################" << endl;
        }
  cout << endl;
}

string verificaItem(string chave, map<string, float> &mapa) { //compara a string escrita com o map selecionado. Retorna a string escrita corretamente.
    while (mapa.count(chave) <= 0){
        cout << "Item nao encontrado. Favor, insira novamente: ";
        getline(cin, chave);
    }
    return chave;
}

void salvar(){
    cout <<"Salvando arquivos... \n";
    salvarArquivo("./data/dados_sanduiches.txt", sanduiche);
    salvarArquivo("./data/dados_sucos.txt", suco);
    salvarArquivo("./data/carrinho.txt", carrinho);
}