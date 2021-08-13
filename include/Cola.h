#ifndef COLA_H
#define COLA_H
#include "nodo.h"

class Cola
{
    public:
        Cola();
        virtual ~Cola();

    nodo * frente;


    void queu(int numero);
    void dequeu();
    void recorrer();
    void graficar();

};

#endif // COLA_H
