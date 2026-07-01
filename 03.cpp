#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main() {
    int n;

    cout << "Ingrese cantidad de personas: ";
    cin >> n;

    Persona personas[100];

    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;

        cout << "Nombre: ";
        cin >> personas[i].nombre;

        cout << "Dia de nacimiento: ";
        cin >> personas[i].dia;

        cout << "Mes de nacimiento: ";
        cin >> personas[i].mes;

        cout << "Anio de nacimiento: ";
        cin >> personas[i].anio;
    }

    int mesBuscado;

    do {
        cout << "\nIngrese un mes (1-12) o 0 para salir: ";
        cin >> mesBuscado;

        if (mesBuscado != 0) {
            cout << "\nPersonas que cumplen en ese mes:\n";

            for (int i = 0; i < n; i++) {
                if (personas[i].mes == mesBuscado) {
                    cout << "Nombre: " << personas[i].nombre << endl;
                    cout << "Fecha: " << personas[i].dia << "/"
                         << personas[i].mes << "/"
                         << personas[i].anio << endl;
                    cout << endl;
                }
            }
        }

    } while (mesBuscado != 0);

    return 0;
}