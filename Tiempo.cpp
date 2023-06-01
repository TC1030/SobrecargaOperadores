#include <iomanip>
#include "Tiempo.hpp"
// ===================================
// Implementación de la clase Tiempo
// ===================================

Tiempo::Tiempo() {
    hora = 0;
    minu = 0;
}

Tiempo::Tiempo(int h, int m) {
    hora = h;
    minu = m;
}

void Tiempo::setHora(int h) {
    hora = h;
}

void Tiempo::setMinu(int m) {
    minu = m;
}

int Tiempo::getHora() const {
    return hora;
}

int Tiempo::getMinu() const{
    return minu;
}

// Agrega las implementaciones de los métodos de sobrecarga de operadores