#include "Jugador.h"

Jugador::Jugador(){
}

Jugador::~Jugador(){
}

string Jugador::getEstado(){
    return estado;
}

string Jugador::getNombre(){
    return nombre;
}

bool Jugador::getTurno(){
    return turno;
}

int Jugador::Ficha(){
    return ficha;
}
