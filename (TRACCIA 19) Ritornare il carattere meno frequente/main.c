#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
TRACCIA 19

Sviluppare una function C che, dati come parametri di input un array di char e il suo size, determina e restituisce come parametro di output il
carattere meno frequente.
*/


char usually(char*, char*);


int main()
{
    char*array= "Carmela ha un quaderno e poi un telefono con una vibrazzione zanzarosa, per� � grande";
    /*char alf[]= {'a','b','c','d','e','f','g','h','i','l','m','n','o','p','q','r','s','t','u','v','z'};*/
    char*alf= "abcdefghilmnopqrstuvz";

    char car= usually(array,alf);

    printf("Il carattere che si ripete meno volte in array e': %c\n",car);

    return 0;
}



char usually(char*stringa, char*Alf)
{
    int i,j,n,m,index;
    n= strlen(stringa);
    m= strlen(Alf);
    int conta=0,conta_chiave=n;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(Alf[i] == stringa[j])
                conta++;
        }
        if(conta < conta_chiave){
            conta_chiave= conta;
            index= i;
        }
        printf("%d\n",conta);
        conta=0;
    }

    return Alf[index];
}
