#ifndef ESTUDIANTE_
#define ESTUDIANTE_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Estudiante {
protected:
    string ci;
    string nombre;
    string apellidos;
    string carrera;
    char sexo;
    int annoEscolar;
    vector<double> notas;
    bool isAyudante;

public:
    Estudiante(string ci, string nombre, string apellidos, string carrera, char sexo, int annoEscolar, const vector<double>& notas, bool isAyudante);

      string getCi();

    virtual ~Estudiante();

    double calcularPromedio();

    int operator>(Estudiante* e);

    void imprimirDatos() ;

    bool esEstudianteAyudante();

};

#endif // ESTUDIANTE_
