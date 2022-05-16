#include <stdio.h>
#include <stdlib.h>

float aplicarAumento (int num);
int reemplazarCaracteres (char vector[], char l1, char l2);


int main()
{
    int precio = 200;
    char cadena [] = {'d', 'f', 'g', 'r', 'f'};
    char caracter1 = 'f';
    char caracter2 = 'z';

    aplicarAumento(precio);

    printf("%.2f", precio);
    printf("\n\n");

    reemplazarCaracteres(cadena, caracter1, caracter2);

    for(int i = 0; i < 5; i ++)
    {
        printf("%c ", cadena[i]);
    }

    return 0;
}

float aplicarAumento (int num)
{
    float resultado;

    num = (float)(num/100)*5 + num;

    return resultado;
}

int reemplazarCaracteres (char vector[], char l1, char l2)
{
    int todoOk = 0;
    int largo = strlen(vector);

    if (vector != NULL)
    {
        for(int i = 0; i < largo; i ++)
        {
            if(vector[i]==l1)
            {
                vector[i]=l2;
            }
        }
        todoOk = 1;
    }
    return todoOk;
}


