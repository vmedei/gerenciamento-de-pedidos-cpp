#ifndef SYSTEM_HPP
#define SYSTEM_HPP

void lerArquivo(std::string nomeArquivo, std::map<std::string, float> &dados);
void salvarArquivo(std::string nomeArquivo, std::map<std::string, float> &dados);
void listarItem(std::map<std::string, float> &item);
std::string verificaItem(std::string chave, std::map<std::string, float> &mapa);
void salvar();

#endif