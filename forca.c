#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "forca.h"

struct noSecreto{
    int status;
    char palavra[31];
    char assunto[100];
    struct noSecreto * prox;
};

NoSecreto * inicializaListaSecreta()
{
    return NULL;
}


NoSecreto * inserePalavraSecreta(NoSecreto * l, char word[31], char subject[100])
{
    NoSecreto * novo;
    novo = (NoSecreto *) malloc(sizeof(NoSecreto));
    novo->status = 0;
    strcpy(novo->assunto, subject);
    strcpy(novo->palavra, word);
    novo->prox = l;
    l = novo;
    return l;
}

void imprimeListaSecreta(NoSecreto *l)
{
   for(NoSecreto *p=l; p!=NULL; p=p->prox)
   {
       printf("%0d | %30s | %30s\n", p->status,p->palavra,p->assunto);
   }
}

NoSecreto * carregaListaArquivo(NoSecreto *l, char nomeArq[255])
{
    int status;
    char palavra[31];
    char assunto[100];
    FILE * fWords;
    fWords = fopen(nomeArq,"r");
    if(fWords==NULL){
        printf("Falha ao acessar base de dados!!!\n\n");
        exit(0);
    }
    while(!feof(fWords))
    {
        if(fscanf(fWords,"%s%s", palavra,assunto))
        {
            l = inserePalavraSecreta(l,palavra, assunto);
        }

    }
    fclose(fWords);
    return l;
}
