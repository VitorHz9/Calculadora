#include <stdio.h>
#include <stdlib.h>
int main()
{
float num1, num2;
char operador,controle;

printf ("---Calculadora---\n");
do {
    printf ("Digite o primeiro numero: ");
    scanf ("%f", &num1);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &num2);
    printf ("Digite o sinal da operacao desejada: ");
    scanf (" %c", &operador);

    switch (operador){
    case '+':
        printf ("A soma dos numeros e %.1f", num1 + num2);
        break;
    case '-':
        printf ("A subtracao dos numeros e %.1f", num1 - num2);
        break;
    case '*':
        printf ("A multiplicacao dos numeros e %.1f", num1 * num2);
        break;
    case '/':
        if (num2 != 0){
            printf ("A divisao dos numeros e %.1f", num1 / num2);
        } else {
        printf ("Nao e possivel dividir por zero");
        }
        break;
    default:
        printf ("Sinal da operacao nao identificada");
        break;
        }
printf ("\nDeseja realizar outro calculo (S-Sim ou N-Nao)?");
scanf (" %c", &controle);

 } while ((controle != 'N') && (controle !='n'));
}

