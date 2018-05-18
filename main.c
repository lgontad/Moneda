#include <stdio.h>
#include <stdlib.h>
#define TAM 3
typedef struct
{
    char pais[10];
    int id;
    char nombre[10];
}eMoneda;

void cargaMonedas(eMoneda*, int);
void moneda_MostrarListado(eMoneda *lista, int limite);

int main()
{

    eMoneda lista[3]; /*= {{"Argentina",1,"Peso"},{"Brasil",2,"Real"},{"EEUU",3,"Dolar"}};*/


    cargaMonedas(lista,TAM);
    moneda_MostrarListado(lista,TAM);




}

void cargaMonedas (eMoneda* lista, int cantidad)
{
    for (int i =0; i<cantidad; i++)
   {
        fflush(stdin);
        printf("Ingrese Pais:");
        gets((lista+i)->pais);
        printf("Ingrese id:");
        scanf("%d",&((lista+i)->id));
        fflush(stdin);
        printf("Ingrese Nombre de la Moneda:");
        gets((lista+i)->nombre);
   }
}

void moneda_MostrarListado(eMoneda *lista, int limite)
{
if ( lista !=NULL && limite>0)
{
    for (int i =0; i<limite; i++)
   {
        printf("%5s %3d %10s\n", (lista+i)->pais, (lista+i)->id, (lista+i)->nombre);
   }
}
}
