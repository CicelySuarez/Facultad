#include "estudianteayudante.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

    EstudianteAyudante::EstudianteAyudante(string ci, string nombre, string apellidos, string carrera, char sexo, int annoEscolar, const vector<double>& notas, bool isAyudante, string asignatura)
        : Estudiante(ci, nombre, apellidos, carrera, sexo, annoEscolar, notas,isAyudante), asignatura(asignatura) {}

    void EstudianteAyudante::imprimirDatos() {
        Estudiante::imprimirDatos();
        cout << "Asignatura: " << asignatura << endl;
    }
