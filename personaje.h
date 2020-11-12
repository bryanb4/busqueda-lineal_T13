#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <iomanip>
using namespace std;

class Personaje 
{
    string nombre;
    string operativo;
    float ram;
    int memoria;
public:
    Personaje();
    Personaje(const string &nombre,
              const string &operativo,
              float ram,
              int memoria);
    void setNombre(const string &v);
    string getNombre();
    void setOperativo(const string &v);
    string getOperativo();
    void setRam(float v);
    float getRam();
    void setMemoria(int v);
    int getMemoria();

    friend ostream& operator<<(ostream &out, const Personaje &p)
    {
        out << left ;
        out << setw(20) << p.nombre;
        out << setw(20) << p.operativo;
        out << setw(20) <<  p.ram ;
        out << setw(20) << p.memoria;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, Personaje &p)
    {
    

        cout << "Nombre: ";
        getline(cin, p.nombre);

        cout << "sistema operativo: ";
        getline(cin, p.operativo);

        cout << "Ram: ";
        cin >> p.ram;

        cout << "memoria: ";
        cin >> p.memoria;


        return in;
    }

    bool operator==(const Personaje& p)
    {
        return nombre == p.nombre;
    }
    bool operator==(const Personaje& p) const
    {
        return nombre == p.nombre;
    }
};

#endif