#include <stdio.h>
int main()
{
    float numero1,numero2;
    char operador;
    printf("CALCULADORA\n");
    printf("informe o sinal da operacao\n");
    printf("soma: (+)\n");
    printf("subtracao: (-)\n");
    printf("multiplcacao: (*)\n");
    printf("divisao: (/)\n");
    scanf("%c", &operador);


    switch (operador)
    {
    case '+':
        printf("digite os dois valores a serem somados: ");
        scanf("%f%f", &numero1, &numero2);
        printf("%.1f + %.1f = %.1f",numero1, numero2, numero1 + numero2);
        break;

     case '-':
        printf("digite os dois valores a serem subtraidos: ");
        scanf("%f%f", &numero1, &numero2);
        printf("%.1f - %.1f = %.1f",numero1, numero2, numero1 - numero2);
        break;

     case '*':
        printf("digite os dois valores a serem multiplicados: ");
        scanf("%f%f", &numero1, &numero2);
        printf("%.1f * %.1f = %.1f",numero1, numero2, numero1 * numero2);
        break;

     case '/':
        printf("digite os dois valores a serem divididos: ");
        scanf("%f%f", &numero1, &numero2);
        printf("%.1f / %.1f = %.1f",numero1, numero2, numero1 / numero2);
        break;
        
    default:
        break;
    }

    return 0;
}
