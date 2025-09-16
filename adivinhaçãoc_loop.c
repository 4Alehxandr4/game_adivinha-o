#include <stdio.h>
// Inclui a biblioteca padrão de entrda e saída 
#include <stdlib.h>
// Local a onde a função abs está incluida 
#include <time.h>
// Local a onde trata função de tempo
int main() {
    // função principal, onde o programa começa a rodar  
    printf("______________________________________\n");
    printf("\n");
    printf("Bem-vindo ao nosso jogo de adivinhacao loop infinito\n");
    printf("______________________________________\n");

        int segundos = time(0); 
        srand(segundos); 
        // essas duas funções acima, garante que o número gerado seja diferente a cada vez que o programa é executado

        int num_grande = rand(); // gera números aleatórios 

        int num_secreto = num_grande % 100; // o num segreto é o resto da divisão do num alaeatório, 
                                            //  assim o num secreto sempre vai ser um num entre 0 e 99
        int chute; // chute do usuário 
        int tentativa = 0; // guarda o num de tentativas 
        double pontos = 100; // total de pontos 
        // double é uma variável que guardar números com casas decimais 

        while(1) {
            printf("Tentativa %d\n", tentativa+1); // soma o num de tentativas para aparecer no terminal 
            printf("Qual e o seu chute do numero magico? ");
            scanf("%d", &chute); // %d se refere a um número inteiro 
         // scanf lê um valor digitado pelo usuário; 
         // Sempre usamos & antes do nome da variável para passar o endereço de memória
        printf("Seu chute foi %d \n", chute);

        if (chute < 0){ 
            printf("Voce nao pode chutar numeros negativos! \n"); // utilizamos essa condição para que o erro dessa tentiva não seja contado
            
            continue; // utilizado quando queremos continuar o loop 
        }

         int acertou = (chute == num_secreto); 
         int maior = chute > num_secreto;

         tentativa++; // soma o num de tentativas 

        // Estrutura condicional 
        if (acertou) { // essa declaração de variável só funciona porque ela está dentro do escopo for 
            printf("Parabens! Voce acertou.\n "); 
            break; // Utilizado para encerrar o código, quando o bloco de código no meio do loop for verdadeira
        }
        
        else if (maior){
            printf("Dica: O seu chute foi maior que o numero secreto, tente um numero menor \n");
        }

        else {
                printf("Dica: O seu chute foi menor que o numero secreto, tente um numero maior\n");
            }

            // calculo da pontuação
            double pontos_perdidos = abs (chute - num_secreto)/2.0;
            // função abs, que conver números negativos em positivos
            pontos = pontos - pontos_perdidos;  
    } 
    printf("Fim de jogo!!!! \n"); 
    printf("Voce acertou em %d tentativas.\n", tentativa);
    printf("Total de pontos %2.f", pontos); //%f faz referência a num decimais e 1. indica as casas decimais 
}