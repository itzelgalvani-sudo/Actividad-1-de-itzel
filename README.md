/******************************************************************************

Autor: Itzel Avelino Galvan
Fecha: 03/04/2026
Descripcion: El codigo realiza el calculo de la edad de una persona para determinar si es mayor de edad o no

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;

    printf("Escribe tu edad:\n");
    scanf("%d", &num);

    if(num >= 18)
        printf("Eres mayor de edad");
    else
        printf("Lo siento eres menor de edad");
}
