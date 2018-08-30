#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int sumar(int, int);

int main()
{
    char opcion;

    do
    {
        printf("(A)lata usuario\n");
        printf("(B)aja usuario\n");
        printf("(M)odificacion de usuario\n");
        printf("(S)alir\n");
        printf("Elija una opcion: ");
        setbuf(stdin,NULL);
        scanf("%c", &opcion);
        opcion = toupper(opcion);

        switch(opcion)
        {
            case 'A':
                printf("Estoy dando de alta...");
            break;
            case 'B':
                printf("Estoy dando de baja...");
            break;
            case 'M':
                printf("Estoy modificando...");
            break;
            case 'S':
                printf("Gracias por usar el programa... ");
            break;
        }
        system("pause");
        system("cls");
    }
    while(opcion != 'S');

    return 0;
}

