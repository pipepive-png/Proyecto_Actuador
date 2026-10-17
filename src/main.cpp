
#include <iostream>
#include <vector>
#include <string>
#include "Actuador.h"

using namespace std;

int main() {
    vector<Actuador> actuadores;

    string nombre;
    int potencia;

    for (int i = 0; i < 2; i++) {
        cout << "\nActuador " << i + 1 << endl;

        cout << "Ingrese el nombre: ";
        getline(cin, nombre);

        actuadores.emplace_back(nombre);

        cout << "Ingrese la potencia (0 a 100): ";
        cin >> potencia;
        cin.ignore(1000, '\n');

        actuadores[i].ajustarPotencia(potencia);
    }

    cout << "\n--- ESTADO DE LOS ACTUADORES ---\n";

    for (int i = 0; i < actuadores.size(); i++) {
        cout << actuadores[i].obtenerEstado() << endl;
    }

    return 0;
}
