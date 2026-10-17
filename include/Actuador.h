
#ifndef ACTUADOR_H
#define ACTUADOR_H

#include <string>

/**
 * @brief Representa un actuador que puede encenderse,
 * apagarse y ajustar su potencia.
 */
class Actuador {
private:
    std::string nombre;
    bool estado;
    int nivelPotencia;

public:
    /**
     * @brief Crea un actuador con un nombre.
     * @param nombre Nombre del actuador.
     */
    Actuador(std::string nombre);

    /**
     * @brief Enciende el actuador.
     */
    void encender();

    /**
     * @brief Apaga el actuador.
     */
    void apagar();

    /**
     * @brief Cambia el nivel de potencia.
     * @param nuevoNivel Potencia entre 0 y 100.
     */
    void ajustarPotencia(int nuevoNivel);

    /**
     * @brief Devuelve la información del actuador.
     * @return Texto con su nombre, estado y potencia.
     */
    std::string obtenerEstado() const;
};

#endif
