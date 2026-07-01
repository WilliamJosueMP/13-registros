#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    string dni;
    int edad;
};

int main() {
    int n;

    cout << "Ingrese cantidad de personas: ";
    cin >> n;

    Persona personas[100];

    int mayores50 = 0;
    int sumaEdades = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;

        cout << "Nombre: ";
        cin >> personas[i].nombre;

        cout << "DNI: ";
        cin >> personas[i].dni;

        cout << "Edad: ";
        cin >> personas[i].edad;

        sumaEdades += personas[i].edad;

        if (personas[i].edad > 50) {
            mayores50++;
        }
    }

    float promedio = (float)sumaEdades / n;

    cout << "\nCantidad de personas mayores de 50: " << mayores50 << endl;
    cout << "Promedio de edades: " << promedio << endl;

    cout << "\nLISTADO DE PERSONAS" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;
        cout << "Nombre: " << personas[i].nombre << endl;
        cout << "DNI: " << personas[i].dni << endl;
        cout << "Edad: " << personas[i].edad << endl;
    }

    return 0;
}