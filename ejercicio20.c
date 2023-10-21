#include <stdio.h>

int main (){
    //se crean las variables a usar
    int num, contador = 0;
    // pide al usuario ingresar un numero
    printf("Ingrese un numero\n");
    scanf("%d",&num);
    // en caso de que el usuario ingrese un numero negativo se usa el if para cambiar el negativo a su valor absoluto
    if (num < 0)
    {
        num = -num;
    } else{

    }
    //se lo usa parta contar el numero de digitos que tiene el numero ingresado por el usuario//
    do
    {
        contador++;
        num /= 10;
    } while (num !=0);
    printf("El numero tiene %d digitos.\n", contador);
    
    return 0;
}