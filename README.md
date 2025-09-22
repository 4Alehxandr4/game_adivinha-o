# Jogo de Adivinhação em C

## 📖 Sobre o Projeto

Este é um simples jogo de adivinhação desenvolvido em linguagem C. O projeto foi criado como parte dos meus estudos no curso de C da Alura, com o objetivo de praticar conceitos fundamentais da linguagem.

O jogo desafia o usuário a adivinhar um número secreto gerado aleatoriamente, oferecendo dicas e feedback a cada tentativa.

## ✨ Funcionalidades

-   **Níveis de Dificuldade**: O jogador pode escolher entre os níveis Fácil, Médio e Difícil, que alteram o número de tentativas disponíveis.
-   **Geração de Números Aleatórios**: O número secreto é gerado aleatoriamente a cada nova partida, garantindo que cada jogo seja único.
-   **Sistema de Pontuação**: O jogador começa com 100 pontos, e a pontuação diminui com base na diferença entre o chute e o número secreto.
-   **Dicas Interativas**: O jogo informa se o chute foi maior ou menor que o número secreto, ajudando o jogador a chegar mais perto da resposta correta.
-   **Contador de Tentativas**: O número de tentativas é limitado e exibido a cada rodada.

## 🚀 Como Executar

Para compilar e executar o jogo, você precisará de um compilador C (como o GCC).

1.  **Clone o repositório:**
    ```sh
    git clone [https://github.com/seu-usuario/game_adivinha-o.git](https://github.com/seu-usuario/game_adivinha-o.git)
    ```

2.  **Navegue até o diretório do projeto:**
    ```sh
    cd game_adivinha-o
    ```

3.  **Compile o arquivo `adivinhacaoc_loop.c`:**
    ```sh
    gcc adivinhacaoc_loop.c -o jogo_adivinhacao
    ```

4.  **Execute o jogo:**
    ```sh
    ./jogo_adivinhacao
    ```

## 📂 Arquivos no Repositório

-   `adivinhacaoc_loop.c`: O código-fonte principal do jogo, com sistema de loop, níveis de dificuldade e pontuação.
-   `adivinhacao.c`: Uma versão inicial e mais simples do jogo, com um número fixo de tentativas.
-   `.gitignore`: Arquivo para ignorar arquivos desnecessários no controle de versão, como executáveis.

---

*Este projeto foi desenvolvido com base no conteúdo do curso de C da Alura.*
