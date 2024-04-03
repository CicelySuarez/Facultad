#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "estudiante.h"
#include "estudianteayudante.h"
#include "facultad.h"

using namespace std;

int main() {
    // OBJETOS ESTUDIANTES
    vector<Estudiante> estudiantes;
    estudiantes.push_back(Estudiante("123456", "Juan", "Perez", "Lic. Ciencia de la Computacion", 'M', 3, {3, 3, 3},false));
    estudiantes.push_back(EstudianteAyudante("654321", "Maria", "Gomez", "Lic. Matematica", 'F', 2, {4, 4, 5},true, "Algebra"));
    estudiantes.push_back(Estudiante("987654", "Carlos", "Lopez", "Ing. Informatica", 'M', 4, {3, 3, 5},false));
    estudiantes.push_back(Estudiante("456789", "Ana", "Martinez", "Lic. Ciencia de la Computacion", 'F', 3, {3, 3, 5},false));
    estudiantes.push_back(Estudiante("234567", "Pedro", "Garcia", "Lic. Ciencia de la Computacion", 'M', 2, {4, 5,3}, false));
    estudiantes.push_back(Estudiante("123456", "Ernesto", "Perez", "Ing. Informatica", 'M', 3, {3, 4, 5}, false));
    estudiantes.push_back(EstudianteAyudante("333863", "Isabel", "Martinez", "Lic. Ciencia de la Computacion", 'F', 4, {5, 5, 5},true, "Inteligencia Artificial"));
    estudiantes.push_back(EstudianteAyudante("385444", "Juan", "Rodriguez", "Ing. Informatica", 'M', 3, {5, 5, 5},true, "Cálculo"));
    estudiantes.push_back(EstudianteAyudante("555789", "Laura", "Sanchez", "Lic. Matemática", 'F', 2, {3, 3, 3},true, "Álgebra"));
    estudiantes.push_back(Estudiante("234567", "Ana", "Bolena", "Lic. Fisica", 'F', 1, {4, 4, 5},false));
    estudiantes.push_back(Estudiante("345678", "Carlos", "Perez", "Lic. Fisica", 'M', 4, {3, 4, 5},false));
    estudiantes.push_back(Estudiante("456789", "Andy", "Garcia", "Lic. Fisica", 'M', 2, {3, 3, 5},false));
    estudiantes.push_back(EstudianteAyudante("189611", "Maria", "Fernandez", "Ing. Informatica", 'F', 2, {4, 4, 5},true, "Cálculo"));
    estudiantes.push_back(EstudianteAyudante("221462", "Antonio", "Perez", "Ing. Informatica", 'M', 3, {3, 3, 5},true, "Programacion"));
    estudiantes.push_back(Estudiante("567890", "Luisa", "Fernandez", "Lic. Matematica", 'F', 3, {3, 5, 3},false));
    estudiantes.push_back(Estudiante("678901", "Marta", "Diaz", "Lic. Ciencia de la Computacion", 'F', 1, {4, 5, 3},false));
    estudiantes.push_back(Estudiante("789012", "Jose", "Sanchez", "Lic. Física", 'M', 2, {3, 4, 5},false));
    estudiantes.push_back(Estudiante("890123", "Laura", "Gutierrez", "Lic. Matemática", 'F', 3, {5, 3, 3},false));
    estudiantes.push_back(EstudianteAyudante("666666", "Pedro", "Gutierrez", "Lic. Física", 'M', 4, {4, 5, 5},true, "Mecánica"));
    estudiantes.push_back(EstudianteAyudante("734577", "Ana", "Diaz", "Lic. Ciencia de la Computacion", 'F', 1, {5, 5, 5},true, "Analisis Matematico"));
    estudiantes.push_back(EstudianteAyudante("884568", "Luis", "Fernandez", "Lic. Matemática", 'M', 2, {5, 4, 4},true, "Geometria Analitica"));
    estudiantes.push_back(EstudianteAyudante("934599", "Marina", "Lopez", "Ing. Informática", 'F', 3, {3, 4, 5},true, "Programación"));
    estudiantes.push_back(EstudianteAyudante("059300", "Marcos", "Ramirez", "Lic. Física", 'M', 4, {4, 4, 5},true, "Fisica Nuclear"));
    estudiantes.push_back(Estudiante("901234", "David", "Ramirez", "Lic. Ciencia de la Computacion", 'M', 1, {3, 3, 4}, false));
    estudiantes.push_back(Estudiante("012345", "Elena", "Lopez", "Ing. Informática", 'F', 3, {5, 4, 5},false));

    Facultad* f = new Facultad(estudiantes);

    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<""<<endl;
    cout<<"BIENVENIDO AL SISTEMA DE GESTION DE ESTUDIANTES DE "<<endl;
    cout<<"  LA FACULTAD DE MATEMATICA, FISICA Y COMPUTACION"<<endl;
    cout<<""<<endl;
    int opcion = 0;
    do{
    cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<""<<endl;
    cout<<"SELECCIONE LA OPCION DESEADA:"<<endl;
    cout<<""<<endl;
    cout<<"1-OBTENER LA LISTA DE TODOS LOS ESTUDIANTE DE LA FACULTAD"<<endl;
    cout<<"2-OBTENER LOS DATOS DE UN ESTUDIANTE"<<endl;
    cout<<"3-OBTENER LOS 5 MEJORES PROMEDIOS"<<endl;
    cout<<"4-OBTENER LOS ESTUDIANTES CON PROMEDIO SUPERIOR O IGUAL A UNA NOTA DADA"<<endl;
    cout<<"5-LISTADO DE ESTUDIANTES AYUDANTES"<<endl;
    cout<<"6-SALIR"<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cin>>opcion;
    cout<<""<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    cout<<""<<endl;
    if(opcion == 1){
       f->escribir_lista_estudiantes();
    } else if(opcion == 2){
       f->buscar_estudiante();
    } else if(opcion == 3){
       f->mejores_5_estudiantes();
    } else if(opcion == 4){
       f->promedios_superiores_o_iguales();
    }else if(opcion == 5){
       f->obtener_ayudantes();
    } else if(opcion != 6){
       cout<<"OPCION INCORRECTA"<<endl;
    }
    }while(opcion!=6);
    return 0;
    }
