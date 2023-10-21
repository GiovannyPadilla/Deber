#include <stdio.h>

int main (){
    //Definimos las variables//
    int num;
    int primerd;
        printf("Ingrese un numero\n");
        scanf("%d", &num);
    if (num<0)
    {
        num= -num;
    }else{
    //uso del whilw para verificar si el numero ingresado es mayor o igual a cero, si la condicion se cumple el numero ingresado tiene mas de dos digitos//    
    }
    while (num>=10)
    {
        num /= 10;
    }
    primerd = num;
    printf("El primer digito del numero ingresado es:%d\n",primerd);
    return 0;
}