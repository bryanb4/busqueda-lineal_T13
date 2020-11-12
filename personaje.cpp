#include "personaje.h"

Personaje::Personaje()
{

}

Personaje::Personaje(const string &nombre,
              const string &operativo,
              float ram,
              int memoria)
{
    this->nombre = nombre;
    this->operativo = operativo;
    this->ram = ram;
    this->memoria = memoria;
}

void Personaje::setNombre(const string &v)
{
    nombre = v;
}

string Personaje::getNombre()
{
    return nombre;
}

void Personaje::setOperativo(const string &v)
{
    operativo = v;
}

string Personaje::getOperativo()
{
    return operativo;
}

void Personaje::setRam(float v)
{
    ram = v;
}

float Personaje::getRam()
{
    return ram;
}

void Personaje::setMemoria(int v)
{
    memoria = v;
}

int Personaje::getMemoria()
{
    return memoria;
}