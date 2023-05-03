#include <stdio.h>

int main() {
    int num, maior, menor;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    maior = menor = num;
    
    while (num >= 0) {
    	
        printf("Digite outro numero inteiro (ou um numero negativo para finalizar): ");
        scanf("%d", &num);
        
        if (num >= 0) {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }
    
    printf("Maior numero lido: %d\n", maior);
    printf("Menor numero lido: %d\n", menor);
    
    return 0;
}

