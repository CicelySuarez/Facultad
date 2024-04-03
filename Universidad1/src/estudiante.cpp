#include "estudiante.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

Estudiante::Estudiante(string ci, string nombre, string apellidos, string carrera, char sexo, int annoEscolar, const vector<double>& notas, bool isAyudante)
        : ci(ci), nombre(nombre), apellidos(apellidos), carrera(carrera), sexo(sexo), annoEscolar(annoEscolar), notas(notas),isAyudante(isAyudante) {}

string Estudiante::getCi(){
        return ci;
        }

 Estudiante::~Estudiante() {}

double Estudiante::calcularPromedio() {
        double suma = 0.0;
        for (double nota : notas) {
            suma += nota;
        }
        return notas.empty() ? 0.0 : suma / notas.size();
    }

int Estudiante::operator>(Estudiante* e){
        return this->calcularPromedio() > e->calcularPromedio();

    }

void Estudiante::imprimirDatos() {
        cout << "CI: " << ci << endl;
        cout << "Nombre: " << nombre << " " << apellidos << endl;
        cout << "Carrera: " << carrera << endl;
        cout << "Sexo: " << sexo << endl;
        cout << "Año Escolar: " << annoEscolar << endl;
        cout << "Notas: ";
        for (double nota : notas) {
            cout << nota << " ";
        }
        cout << endl;
    }

bool Estudiante::esEstudianteAyudante() {
        return isAyudante;
    }

