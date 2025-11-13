🎮 Sistema de Inventário – Nível 1 do Jogo
📘 Descrição

Este projeto tem como objetivo simular o inventário inicial de um jogador em um jogo de sobrevivência.
O sistema permite cadastrar, remover, listar e buscar itens dentro de uma mochila virtual, aplicando os conceitos de structs e listas sequenciais em linguagem C.

O jogador precisa tomar decisões rápidas para organizar seus recursos (armas, munições, kits médicos e ferramentas), garantindo eficiência nas primeiras etapas do jogo.

🧩 Funcionalidades

🆕 Cadastro de Itens: o jogador pode adicionar até 10 itens à mochila, informando nome, tipo e quantidade.

🗑️ Remoção de Itens: exclusão de um item com base no nome informado.

📜 Listagem de Itens: exibe todos os itens cadastrados com seus dados.

🔍 Busca Sequencial: permite localizar um item pelo nome e exibir suas informações.

💬 Interface interativa: o sistema orienta o jogador com mensagens claras a cada ação.

🧠 Estrutura do Código

O projeto foi desenvolvido com as seguintes principais funções:

Função	Descrição
inserirItem()	Cadastra um novo item na mochila.
removerItem()	Remove um item existente.
listarItens()	Mostra todos os itens cadastrados.
buscarItem()	Localiza um item pelo nome.

Além disso, utiliza uma struct Item:

typedef struct {
    char nome[30];
    char tipo[20];
    int quantidade;
} Item;

⚙️ Tecnologias Utilizadas

Linguagem: C

Bibliotecas: stdio.h, stdlib.h, string.h

Conceitos aplicados: Structs, Vetores, Funções, Laços e Busca Sequencial

🚀 Como Executar o Projeto

Faça o download ou clone do repositório:

git clone https://github.com/seu-usuario/seu-repositorio.git


Acesse a pasta do projeto:

cd nome-do-repositorio


Compile o código:

gcc inventario.c -o inventario


Execute o programa:

./inventario

📂 Estrutura do Repositório
📦 inventario-jogo
 ┣ 📜 inventario.c
 ┣ 📜 README.md
 ┗ 📄 LICENSE (opcional)

👩‍💻 Autora

Jhennifer Gabrielle Leandro
💼 Desenvolvido como parte da atividade prática de programação em C – Estruturas de Dados (Structs e Listas Sequenciais).
