#ifndef NODO_H
#define NODO_H
#include <iostream>

class nodo
{
    public:
        nodo(int numero);
        virtual ~nodo();

        nodo *siguiente;
        int numero;

};

#endif // NODO_H
