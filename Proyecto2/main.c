#include <stdio.h>
#include <stdlib.h>

void calcular(int num1, int num2, int operacion);
void mostrar();
float sumar(int num1 , int num2);
float restar(int num1 , int num2);
float multiplicar(int num1 , int num2);
float dividir(int num1 , int num2);

int main()
{
   calcular(1, 1 , 2);
   calcular(3, 7 , 1);
   calcular(10, 2 , 4);
   calcular(2, 3 , 3);
}

void calcular(int num1, int num2, int operacion)
{
    float resultado;
    switch(operacion)
    {
    case 1:
        resultado = num1+num2;
        break;

    case 2:
        resultado = num1-num2;
        break;

    case 3:
        resultado = num1 * num2;
        break;

    case 4:
        resultado = num1/num2;
        break;
    }


    printf("El resultado es: %f \n", resultado);

}

float sumar(int num1, int num2)
{
    return num1+num2;
}
float restar(int num1, int num2)
{
    return num1-num2;
}
float multiplicar(int num1, int num2)
{
    return num1*num2;
}
float dividir(int num1, int num2)
{
    return num1/num2;
}
void mostrar(float resultado)
{
    printf("El resultado es: %f" , resultado);
}
