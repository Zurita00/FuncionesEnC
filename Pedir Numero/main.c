#include <stdio.h>
#include <stdlib.h>
void calcular(int num1, int num2, int operacion);

int main()
{
    printf("Ingrese la operación que desea realizar: ");
    printf("\n 1.Sumar \n 2.Restar \n 3.Multiplicar \n 4.Dividir \n ");
    int operacion = pedirDato();
    printf("Ingrese el primer numero: " );
    int num1 = pedirDato();
    printf("Ingrese el segundo numero: " );
    int num2 = pedirDato();


}

void calcular(int num1, int num2, int operacion)
{
    float resultado;
    switch(operacion){
    case 1:
        resultado = num1 + num2;
        break;

    case 2:
        resultado = num1 - num2;
        break;
    case 3:
        resultado = num1 * num2;
        break;
    case 4:
        resultado = num1 / num2;
        break;
    }
}

