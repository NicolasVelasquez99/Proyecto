#ifndef TABLERO_H
#define TABLERO_H


class Tablero{
    private:
        int tamaño;
    public:
        Tablero(int n);
        ~Tablero();

        int getTamaño();
        void setTamaño(int n);
        void validacion();
};

#endif // TABLERO_H
