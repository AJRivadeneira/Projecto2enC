#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int pedirNumero(char*);

int main()
{
    int legajo;
    int nota;
    int edad;
    int dni;

    legajo = pedirNumero("Ingrese un legajo: ");
    nota = pedirNumero("Ingrese una nota: ");
    edad = pedirNumero("Ingrese una edad: ");
    dni = pedirNumero("Ingrese DNI: ");

    return 0;
}

int pedirNumero(char* texto)
{
    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;
}

