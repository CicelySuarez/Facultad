#include "facultad.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "estudiante.h"
#include"estudianteayudante.h"

using namespace std;


    Facultad::Facultad(vector<Estudiante> est): est(est){}

    void Facultad::setEst(vector<Estudiante> est){this->est = est;}
    vector<Estudiante> Facultad::getEst(){return est;}

    void Facultad::escribir_lista_estudiantes(){
        for(int i = 0; i<est.size();i++){
            cout << "Estudiante " << i + 1 << ":" << endl;
        est[i].imprimirDatos();
        cout << "Promedio: " << est[i].calcularPromedio() << endl;
        if(est[i].esEstudianteAyudante()){
            cout<<"Es estudiante ayudante"<<endl;
        } else {
            cout<<"No es estudiante ayudante"<<endl;
        }
        cout << endl;
        }
    }

    void Facultad::obtener_ayudantes(){
        cout<<"------------------------------------------------------"<<endl;
        cout<<"        Listado de estudiantes ayudantes"<<endl;
        for(int i = 0; i<est.size();i++){
            if(est[i].esEstudianteAyudante()){
            cout << "Estudiante " << i + 1 << ":" << endl;
        est[i].imprimirDatos();
        cout << "Promedio: " << est[i].calcularPromedio() << endl;
        cout << endl;
            }
        }
    }

    void Facultad::promedios_superiores_o_iguales(){
       double nota;
       cout << "Ingrese la nota: ";
       cin >> nota;
       for(int i = 0; i<est.size();i++){
            if(est[i].calcularPromedio()>=nota){
            cout << "Estudiante " << i + 1 << ":" << endl;
        est[i].imprimirDatos();
        cout << "Promedio: " << est[i].calcularPromedio() << endl;
        cout << endl;
            }
        }
    }

    void Facultad::insertSort(vector<Estudiante>& arr) {
        for (int i = 1; i < arr.size(); i++) {
            Estudiante tmp = arr[i];
            int j = i - 1;
            while (j >= 0 && tmp>&arr[j]) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j+1] = tmp;
        }
    }

    void Facultad::mejores_5_estudiantes(){
        cout << "Los 5 mejores promedios de la Facultad de Matematica, Fisica y Computacion:" << endl;
        vector<Estudiante> aux;
        for(int i = 0; i<est.size(); i++){
            aux.push_back(est[i]);
        }
        insertSort(aux);
        for (int i = 0; i < min(5, (int)aux.size()); ++i) {
        cout << "Estudiante " << i + 1 << ":" << endl;
        aux[i].imprimirDatos();
        cout << "Promedio: " << aux[i].calcularPromedio() << endl;
        cout << endl;
        }
    }

    void Facultad::buscar_estudiante(){
    string ciBuscado;
    cout << "Ingrese el CI del estudiante para identificarlo: ";
    cin >> ciBuscado;
    bool encontrado = false;
    for (Estudiante& estudiante : est) {
        if (estudiante.esEstudianteAyudante()) {
             EstudianteAyudante& ayudante = static_cast< EstudianteAyudante&>(estudiante);
            if (ayudante.esEstudianteAyudante()) {
                encontrado = true;
                cout << "Estudiante encontrado:" << endl;
                estudiante.imprimirDatos();
                cout << "Promedio: " << estudiante.calcularPromedio() << endl;
                cout << "Es estudiante ayudante"<<endl;
                break;
            }
        } else {
            if (estudiante.getCi() == ciBuscado) {
                encontrado = true;
                cout << "Estudiante encontrado:" << endl;
                estudiante.imprimirDatos();
                cout << "Promedio: " << estudiante.calcularPromedio() << endl;
                cout << "No es estudiante ayudante"<<endl;
                break;
            }
        }
    }
      if (!encontrado) {
        cout << "No se encontró ningún estudiante con el CI proporcionado." << endl;
       }
    }

