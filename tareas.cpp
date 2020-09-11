#include <iostream>
using namespace std;

struct tareas{
    string nombreUbicacion;
    int dificultad;
    int duracion;
    char tipo;
};

struct tareas registro;

void dificultad();

int main(){
    cout << "Inserte nombre de tarea: "; 
    getline(cin,registro.nombreUbicacion);
    cout << "Inserte dificultad de tarea (1-5): ";
    cin >> registro.dificultad;
    cout << "Inserte duracion: ";
    cin >> registro.duracion;
    cout << "Inserte tipo (R, C, O): ";
    cin >> registro.tipo;
    cout << endl;

    dificultad();
}

void dificultad(){
    int duraciontotal=0;
    if((registro.dificultad)>=4){
        duraciontotal=(registro.dificultad)*(registro.duracion);
        cout << " ---------- D A T O S  F I N A L E S -------------------" << endl;
        cout << "Tarea: " << registro.nombreUbicacion << endl;
        cout << "Tipo: " << registro.tipo << endl;
        cout << "Duracion total: " << registro.dificultad*registro.duracion << " segundos" << endl;
    }
    else{
        cout << "Suerte :D";
    }
}