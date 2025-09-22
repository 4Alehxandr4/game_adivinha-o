// As  três maneiras de utilizar o if() são:
// if() sozinho — executará o bloco de código somente se a condição for verdadeira;
//else if() — executará o primeiro bloco de código se a condição for verdadeira, ou o segundo bloco, se a primeira for falsa;
// if- else if- else — procura a condição verdadeira para executar, ignorando as demais ou, se todas são falsas, executa o último bloco 
// de código else. (a estrutura que estamos utilizando)

#include <stdio.h>
// Inclui a biblioteca padrão de entrda e saída 
#define NUMERO_DE_TENTATIVA 3 
// Declaração de constante 
int main() {
    // função principal, onde o programa começa a rodar  
    printf("______________________________________\n");
    printf("\n");
    printf("Bem-vindo ao nosso jogo de adivinhacao\n");
    printf("OBS: Voce tem 3 tentativas!\n");
    printf("______________________________________\n");

        int num_secreto = 19; // Num secreto a ser adivinhado
        int chute; // chute do usuário 


        for(int i = 1; i <= NUMERO_DE_TENTATIVA; i++) {
            printf("Tentativa numero %d de %d\n", i,NUMERO_DE_TENTATIVA); 
            // Estrutura de loop 
            // inicialização → onde se declara a variável e começa a contagem (int i = 1)
            // condição → até onde vai rodar (i <= 3)
            // atualização → o que acontece a cada repetição (i++)

        printf("Qual e o seu chute do numero magico? ");
        scanf("%d", &chute); // %d se refere a um número inteiro 
         // scanf lê um valor digitado pelo usuário; 
         // Sempre usamos & antes do nome da variável para passar o endereço de memória
        printf("Seu chute foi %d \n", chute);

        if (chute < 0){ 
            printf("Voce nao pode chutar numeros negativos! \n"); --i; // utilizamos essa condição para que o erro dessa tentiva não seja contado
            
            continue; // utilizado quando queremos continuar o loop 
        }

         int acertou = (chute == num_secreto); 
         int maior = chute > num_secreto;

        // Estrutura condicional 
         if (acertou) { // essa declaração de variável só funciona porque ela está dentro do escopo for 
            printf("Parabens! Voce acertou. "); 
            break; // Utilizado para encerrar o código, quando o bloco de código no meio do loop for verdadeira
        }
        
        else if (maior){
            printf("Dica: O seu chute foi maior que o numero secreto, tente um numero menor \n");
        }
        else {
                printf("Dica: O seu chute foi menor que o numero secreto, tente um numero maior\n");
            }
    } 
    printf("Fim de jogo!!!!");

}
