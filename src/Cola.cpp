#include "Cola.h"

using namespace std;

Cola::Cola()
{
    //ctor
    this->frente=NULL;
}


void Cola::queu(int num){
    nodo * nuevo = new nodo(num);
    nuevo->numero = num;
    nuevo->siguiente = frente;
    frente = nuevo;
}

void Cola::dequeu(){
    nodo * aux1, * aux2;
    if(frente != NULL){
        aux1 = frente;
        while(aux1->siguiente != NULL){
            aux2 = aux1;
            aux1 = aux1->siguiente;
        }
        if(aux1 != frente)
            aux2->siguiente = NULL;
        else
            frente = NULL;
        delete(aux1);

    }
    else
        cout<<"Lista vacia"<<endl;
}

void Cola::recorrer(){
nodo * aux;
if(frente != NULL){
    aux = frente;
    while(aux != NULL){
        cout<<" -> "<<aux->numero;
        aux = aux ->siguiente;

    }
}
else
    cout<<"Lista vacia"<<endl;
}

Cola::~Cola()
{
    //dtor
}
