
#include "Actuador.h"
#include <sstream>

Actuador::Actuador(std::string nombre) {
    this->nombre = nombre;
    estado = false;
    nivelPotencia = 0;
}

void Actuador::encender() {
    estado = true;
}

void Actuador::apagar() {
    estado = false;
    nivelPotencia = 0;
}

void Actuador::ajustarPotencia(int nuevoNivel) {
    if (nuevoNivel >= 0 && nuevoNivel <= 100) {
        nivelPotencia = nuevoNivel;

        if (nivelPotencia > 0) {
            estado = true;
        } else {
            estado = false;
        }
    }
}

std::string Actuador::obtenerEstado() const {
    std::stringstream resultado;

    resultado << "Nombre: " << nombre
              << " | Estado: ";

    if (estado) {
        resultado << "Encendido";
    } else {
        resultado << "Apagado";
    }

    resultado << " | Potencia: " << nivelPotencia << "%";

    return resultado.str();
}
