#ifndef JUGADOR_H
#define JUGADOR_H


class Jugador{
    private:
        string estado;// Si es jugador1 o jugador2
        string nombre;
        bool turno;
        int ficha;
    public:
        Jugador();
        ~Jugador();

        string getEstado();
        string getNombre();
        bool getTurno();
        int Ficha();// Es el numero que va a tomar en la matriz

        //Considero no son necesarios
        void setEstado(string est);
        void setNombre(string nom);
};

#endif // JUGADOR_H
