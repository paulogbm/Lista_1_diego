#include <stdio.h>

int main() {
    int opcao, quantidade;
    float valor, total = 0;
    
    do {
    	
    	
        printf("\nEscolha a fruta: \n");
        printf("1 - Abacaxi (R$5,00/unidade)\n");
        printf("2 - Maca (R$1,00/unidade)\n");
        printf("3 - Pera (R$4,00/unidade)\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        
        
        switch(opcao) {
            case 1:
                valor = 5.0;
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += valor * quantidade;
                break;
            case 2:
                valor = 1.0;
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += valor * quantidade;
                break;
            case 3:
                valor = 4.0;
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += valor * quantidade;
                break;
            case 0:
                printf("Encerramento da compra.\n");
                break;
            default:
                printf("Opcao nao valida.\n");
                break;
        }
        
    } while(opcao != 0);
    
    printf("Valor total da compra: R$%.2f\n", total);
    
    return 0;
}

