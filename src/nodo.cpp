#include "nodo.h"

nodo::nodo(int numero)
{
    //ctor
    this->numero = numero;
    this->siguiente = NULL;
}

nodo::~nodo()
{
    //dtor
}
