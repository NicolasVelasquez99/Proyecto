#ifndef TABLERO_H
#define TABLERO_H


class Tablero{
    private:
        int tama�o;
    public:
        Tablero(int n);
        ~Tablero();

        int getTama�o();
        void setTama�o(int n);
        void validacion();
};

#endif // TABLERO_H
