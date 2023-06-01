/*
 Clase Tiempo
 El valor de hora puede ser cualquier valor positivo
 El valor de minutos debe ser un valor entre 0 y 59
 Al realizar cualquier operación, el tiempo (hora y minutos) debe quedar con valores válidos
 */
#pragma once // previene múltiples inclusiones del archivo de cabecera
#include <iostream>
class Tiempo {
    public:
        Tiempo();
        Tiempo(int h, int m);
        void setHora(int h);
        void setMinu(int m);
        int getHora() const;
        int getMinu() const;
        /*1. Agrega las definiciones de los métodos siguientes guiáte por el UML de la clase y los comentarios siguientes:*/
        // Miembro de la clase. operador ++ incrementa (preincremento) el Tiempo en 1 minuto y regresa el tiempo
        
        //Friend. operador -- decrementa (predecremento)el Tiempo en 1 minuto y regresa el tiempo
        // si la hora es 0:0 y se pide decrementar, regresa 0:0
        
        // Miembro de la clase. operador > Compara si el primer Tiempo es mayor que el segundo
        
        // Miembro de la clase. operador + Para sumar tiempo + minutos, regresa un tiempo como resultado
        
        // Friend. operador + Para sumar minutos + tiempo, regresa un tiempo como resultado
        
        // Miembro de la clase. operador + Suma t1 con t2 y regresa un tiempo con el resultado
        
        // Friend. operador += Suma t1 con t2 y deja el resultado en t1, no regresa nada
        
        // Sobrecarga el operador de salida: Friend. operador << Imprime el tiempo con el formato 00:00 a través del operador <<

        // sobrecarga el operador de entrada: Friend. operador >> Lee el tiempo obtiene hora y minutos a través del operador >>
    
    private:
        int hora;
        int minu;
};