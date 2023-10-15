#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

bool senha();
void listarMenuFuncionario();
void adicionarItem(std::map<std::string, float> &item, std::string nome, float valor);
void excluirItem(std::map<std::string, float> &item, std::string nome);

#endif