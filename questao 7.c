#include <stdio.h>

int main() {
    int i , n, fib, a = 0, b = 1;

    printf("Digite um numero inteiro, maior ou igual a zero: ");
    scanf("%d", &n);

    if(n == 0) {
        fib = 0;
    } else if(n == 1) {
        fib = 1;
    } else {
        for(i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("O enesimo termo da sequencia de Fibonacci e: %d\n", fib);

    return 0;
}

