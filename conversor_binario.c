#include <stdio.h>
#include <math.h>
#include <string.h>

int conversao(char *string);
int main(void)
{   
    char teste1[] = "10000001";
    char teste2[] = "000001";
    char teste3[] = "00010101";

    printf("Primeiro teste: %d\n", conversao(teste1));
    printf("Segundo teste: %d\n", conversao(teste2));
    printf("Terceiro teste: %d\n", conversao(teste3));
}

int conversao(char *string)
{
    int len = strlen(string);
    int resultado = 0;
    int decimal = 1;

    for (int i = (len - 1); i >= 0; i--)
    {
        if(string[i] == '1') resultado += decimal;
        decimal *=2;
    }
    
    return resultado;
}