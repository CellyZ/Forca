#include <stdio.h>
#include <stdlib.h>
#include "forca.h"

int main()
{
    NoSecreto * lstSecreta = inicializaListaSecreta();

    lstSecreta = carregaListaArquivo(lstSecreta,
                                     "palavras.dat");
    imprimeListaSecreta(lstSecreta);

    return 0;
}
