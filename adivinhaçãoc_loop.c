#include <stdio.h>
// Inclui a biblioteca padrão de entrda e saída 
int main() {
    // função principal, onde o programa começa a rodar  
    printf("______________________________________\n");
    printf("\n");
    printf("Bem-vindo ao nosso jogo de adivinhacao loop infinito\n");
    printf("______________________________________\n");

        int num_secreto = 19; // num secreto a ser adivinhado
        int chute; // chute do usuário 
        int tentativa = 0; // guarda o num de tentativas 
        double pontos = 10; // total de pontos 
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

            tentativa++; // soma o num de tentativas 

            // calculo da pontuação
            double pontos_perdidos = (chute - num_secreto)/2.0;
            pontos = pontos - pontos_perdidos;  
    } 
    printf("Fim de jogo!!!! \n"); 
    printf("Voce acertou em %d tentativas.\n", tentativa);
    printf("Total de pontos %2.f", pontos); //%f faz referência a num decimais e 1. indica as casas decimais 
}