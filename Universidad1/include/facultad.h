#ifndef FACULTAD_H
#define FACULTAD_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include"estudiante.h"

using namespace std;

class Facultad{
    vector<Estudiante> est;

public:
    Facultad(vector<Estudiante> est);

    void setEst(vector<Estudiante> est);
    vector<Estudiante> getEst();

    void escribir_lista_estudiantes();

    void obtener_ayudantes();

    void promedios_superiores_o_iguales();

    void insertSort(vector<Estudiante>& arr) ;

    void mejores_5_estudiantes();

    void buscar_estudiante();
};

#endif // FACULTAD_H
