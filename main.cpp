#include <iostream>
#include "Cola.h"
using namespace std;

int main()
{
    Cola * nueva_cola = new Cola();
    bool bole_1 = true;

    do{
        int op = 0;
        cout<<"**********MENU**********"<<endl;
        cout<<"1. Queu"<<endl;
        cout<<"2. Dequeu"<<endl;
        cout<<"3. Graficar o recorrer"<<endl;
        cout<<"4. Terminar"<<endl;
        cout<<"Escoge una opcion: ";
        cin>>op;
        cout<<"________________________"<<endl;


        switch(op){
    case  1:{
        int a = 0;
        cout<<"Ingrese un numero: ";
        cin>>a;
        nueva_cola->queu(a);
        }
        break;
    case  2:
        cout<<"desencolar"<<endl;
        nueva_cola->dequeu();
        break;
    case  3:
        cout<<"graficar"<<endl;
        nueva_cola->recorrer();
        cout<<endl;
        break;
    case  4:
        bole_1 = false;
        break;
    default:
        cout<<"No existe esta opcion";
        break;
        }
    }while(bole_1 == true);

    return 0;
}
