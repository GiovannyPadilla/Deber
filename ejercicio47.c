#include <stdio.h>

int main (){
    int num, i;
    int factorial=1;
    int sumfact=0;
    //leer el numero entero desde la entrada//
    printf("Ingrese un numero\n");
    scanf("%d",&num);

    if (num<0)
    {
        printf("El factorial de un numero negativo no esta definido\n");
    }else{
        for ( i = 1; i < num; i++)
        {
            factorial *= i;
            sumfact += factorial;
        }
        //imprimir resultado//
        printf("La suma de los factoriales de los numeros del 1 al %d es: %d\n",num,sumfact);
    } 
    
    return 0;

}