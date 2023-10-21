#include <stdio.h>

int main (){
    //se crean las variables a usar
    int num, contador = 0;
    // pide al usuario ingresar un numero
    printf("Ingrese un numero\n");
    scanf("%d",&num);
    // uso del if en caso de que el usuario ingrese un numero negativo
    if (num < 0)
    {
        num = -num;
    } else{

    }
    
    return 0;
}