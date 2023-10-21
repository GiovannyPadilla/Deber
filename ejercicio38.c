#include <stdio.h>

int main (){
    int num;
    //ingresar numero entero//
    printf("Ingrese un numero entero\n");
    scanf("%d", &num);
    printf("Tabla de multiplicar del %d:\n",num);
    //uso del bucle for para repetir la operacion de multiplicar el numero del 1 al 12
    for(int i=1; i<=12;i++){
        printf("%d x %d = %d\n",num, i, num*i);
    }

    return 0;
}