#ifndef ESTUDIANTEAYUDANTE_H
#define ESTUDIANTEAYUDANTE_H


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "estudiante.h"

using namespace std;

class EstudianteAyudante : public Estudiante {
private:
    string asignatura;

public:
    EstudianteAyudante(string ci, string nombre, string apellidos, string carrera, char sexo, int annoEscolar, const vector<double>& notas, bool isAyudante, string asignatura);

    void imprimirDatos();
};
#endif // ESTUDIANTEAYUDANTE_H
