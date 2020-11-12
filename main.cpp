#include <iostream>
#include "arreglo.h"
#include "personaje.h"
using namespace std;

int main()
{
    Arreglo<Personaje> personajes;

    Personaje p01("azus", "windus", 12.0, 1024);
    Personaje p02("samsun", "linuzs", 12.0, 1024);
    Personaje p03("mak", "MecOS", 12.0, 1024);
    Personaje p04("samsun", "thegame", 8.0, 512);
    Personaje p05("ELG", "LGOS", 18.0, 625);

    personajes << p01 << p02 << p03 << p04 << p05 <<p02 << p02;
    Personaje p06("samsun", "linuzs", 12.0, 1024);


    Arreglo<Personaje*> ptrs = personajes.buscar_todos(p06);

    if (ptrs.size() > 0) {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Personaje *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else {
        cout << "coinsidencia no encontrada" << endl;
    }




    return 0;
}
