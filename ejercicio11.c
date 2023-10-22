#include <stdio.h>

int main (){
    // creamos las variables a usar
    int num, primerd, segundod;
    //pedimos al usuario que  ingrese un numero//
    printf("Ingrese un numero de dos digitos\n");
    scanf("%d", &num);
    //utilizamos lo siguiente para separar y extraer el primer y segundo digito de un numero entero de dos digitos
    primerd=num / 10;
    segundod= num % 10;
    // utilizamos if para verificar que el numero ingresado es de dos digitos
    if (num >=10 && num<=99)
    {
        
    }
    
    return 0;
}