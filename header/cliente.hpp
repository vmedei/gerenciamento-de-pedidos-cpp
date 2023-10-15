#ifndef CLIENTE_HPP
#define CLIENTE_HPP

void listarMenuCliente();
void escolherItem(std::map<std::string, float> &itemEscolhido, std::map<std::string, float> &carrinho, std::string nome);
void totalCarrinho(std::map<std::string, float> &item);

#endif