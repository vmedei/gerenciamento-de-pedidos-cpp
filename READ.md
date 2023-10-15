
# Projeto I, Linguagem de Programação I (IMD0030 - T01 - 2023.2) 📃

## Índice
- <a href="#resumo">Resumo</a>
- <a href="#dados">Dados</a>
    - <a href="#carregamento-de-arquivos">Carregar Arquivos</a>;
    - <a href="#salvar-e-encerrar">Salvar e Encerrar</a>
- <a href="#menus">Menus</a>
    - <a href="#menu-principal">Menu Principal</a>
    - <a href="#loop-principal">Loop Principal</a>
    - <a href="#menu-funcionário">Menu Funcionario</a>
    - <a href="#menu-cliente">Menu Cliente</a>
- <a href="#funções">Funções</a>
    - <a href="#funções-compartilhadas">Funções Compartilhadas</a>
    - <a href="#funções-auxiliares">Funções Auxiliares</a>
    - <a href="#outros-detalhes">Outros Detalhes</a>
- <a href="#sobre">Sobre</a>
    - <a href="#orientações">Orientações</a>
    - <a href="#autor">Autor</a>


## Resumo
O código é um sistema de gerenciamento de pedidos escrito em C++,  sem interface gráfica (acessado exclusivamente através do terminal) onde os usuários podem adicionar, listar e modificar itens de dois tipos: sanduíches e sucos. Existem funcionalidades distintas para funcionários e clientes. Vou explicar as principais funcionalidades do código:

## Dados

### Carregamento de Arquivos:
O código começa carregando dados de arquivos distintos para variáveis do tipo **_map_** respectivos: sanduiche, suco e carrinho. Esses dados representam os itens e seus preços.

### Salvar e Encerrar:
Ao sair do programa, após confirmação do usuário, salva os dados das variáveis do tipo **_map_** em seus respectivos arquivos.

## Menus

### Menu Principal:
O programa exibe um menu onde o usuário pode escolher entre ser um cliente ou um funcionário.

### Loop Principal:
O programa está em um loop infinito _(while(true))_ que mantém o usuário no sistema até que ele escolha uma das opções do menu principal ou escolha sair.

### Menu Funcionário:
Após a validação de usuário e senha, o menu do funcionário oferece as seguintes opções:

    Listar itens do tipo sanduíche.
    Listar itens do tipo suco.
    Adicionar novo item do tipo sanduíche.
    Adicionar novo item do tipo de suco.
    Alterar preço de um item do tipo sanduíche.
    Alterar preço de um item do tipo suco.
    Excluir item do tipo sanduíche.
    Excluir item do tipo suco.
    Sair (o funcionário volta para o menu principal).

### Menu Cliente:
O menu do cliente oferece as seguintes opções:

    Listar itens do tipo sanduíche.
    Listar itens do tipo suco.
    Adicionar item do tipo selecionado ao carrinho (com a opção de adicionar mais de um item).
    Listar itens do carrinho.
    Remover item do carrinho.
    Finalizar pedido.
    Sair (o cliente volta para o menu principal).

## Funções

### Funções Compartilhadas:
Há algumas funcionalidades comuns entre clientes e funcionários, como listar itens de sanduíche e suco.

### Funções Auxiliares:
Existem várias funções auxiliares implementadas para realizar tarefas específicas de cada usuario, como ler e listar itens, adicionar/excluir elementos no banco de dados do respectivo item, entre outras.

### Outros Detalhes:
Alguns detalhes como a função **_verificaItem()_** que garante que um item inserido pelo usuário está presente no mapa antes de continuar, a função **_cin.ignore()_** para limpar o buffer antes do _std::cin_, além da utilização de variáveis temporárias, para confirmar a escolha do usuário.

## Sobre

### Orientações

As orientações para realização do projeto foram as seguintes:

#### Francisco é o dono de uma lanchonete e deseja criar um sistema de pedidos de lanches automático. A lanchonete vende sanduíches e sucos. O sistema deverá ter as seguintes características:

- Ter dois perfis de usuários habilitados para utilizar o sistema (clientes da lanchonete e o gerente);
    - O perfil de cliente deve ter um menu com as seguintes opções:
        1. [x] Listar todos os sanduíches cadastrados;
        2. [x] Listar todos os sucos cadastrados;
        3. [x] Escolher o lanche (sanduíche, suco) e guardar em um elemento STL (Apenas o nome do produto e o preço);
        4. [x] Calcular o valor do lanche (todos os elementos salvos no carrinho);
        5. [x] Ver elementos do carrinho (lanche escolhido);
        6. [x] Excluir um item do carrinho.
    -  O perfil de gerente deverá ter uma senha de acesso (admin) para evitar que estranhos acessem informações indevidas [x] e conter os seguintes itens de menu:
        1. [x] Listar todos os sanduíches cadastrados;
        2. [x] Listar todos os sucos cadastrados;
        3. [x] Adicionar um novo sanduíche;
        4. [x] Adicionar um novo suco;
        5. [x] Alterar o preço de um sanduíche;
        6. [x] Alterar o preço de um suco;
        7. Excluir um sanduíche;
        8. [x] Excluir um suco;

- Para o projeto você deverá considerar os seguintes aspectos:
    1. [x] Utilizar um arquivo para armazenar todos os sanduíches (nome do sanduíche e seu preço);
    2. [x] Utilizar um arquivo para armazenar todos os sucos (nome do suco e seu preço);
    3. [x] Utilizar pelo menos uma estrutura STL (vector, list, set, map, stack, queue);
    4. [x] Utilizar a modularização do código (Arquivos .hpp e .cpp);
    5. [x] Criar um código organizado e comentado;
    6. [x] O arquivo deverá ser lidos sempre que o programa for inicializado para que as informações sejam retomadas;
    7. [x] O arquivo que armazena os sanduíches e sucos deverá conter pelo menos cinco elemento de cada salvos;
    8. [x] Seu programa deverá ter um README (um arquivo externo explicado o funcionamento e as funcionalidades do seu sistema);
    9. [x] Antes de finalizar o programa você deverá atualizar os arquivos para que as exclusões saiam do arquivo original.
        > Você pode fazer isso sobrescrevendo o arquivo original e copiando para ele os dados carregados do programa (basta não utilizar a opção ios::app).
- Esquema de pontuação do projeto:
    - **2,5 pts** - Utilizar corretamente arquivos (leitura e escrita);
    - **1,5 pts** - Utilizar corretamente estruturas STL (importação, criação e uso);
    - **2,5 pts** - Utilizar a modularização (arquivos de corpo e de cabeçalho);
    - **1,5 pts** - Organização do código e comentários nas funções;
    - **2,0 pts** - Executando corretamente (sem erros);
    - **Total**: 10,0 pts.

### Autor

Vinicius Alves Medeiros, aluno da disciplina de Linguagem de Programação I (IMD0030 - T01) do professor Janiheryson Felipe de Oliveira Martins, do Instituto Metrópole Digital, da Universidade Federal do Rio Grande do Norte no semestre 2023.2;