#include <stdio.h>
#define PI 3.14159

int main() {
    double raio, volume, area;
    

    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);
    
    volume = (4.0/3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;
    
    printf("A area da superficie da esfera e de : %.4lf\n", area);
    printf("O volume da esfera e de : %.4lf\n", volume);
    
    return 0;
}

