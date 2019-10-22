#ifndef FORCA_H_INCLUDED
#define FORCA_H_INCLUDED

typedef struct noSecreto NoSecreto;

NoSecreto * inicializaListaSecreta();
NoSecreto * carregaListaArquivo(NoSecreto *l, char nomeArq[255]);
void imprimeListaSecreta(NoSecreto *l);
NoSecreto * inserePalavraSecreta(NoSecreto * l, char word[31], char subject[100]);

#endif // FORCA_H_INCLUDED
