/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: CuentaAhorros.h
    Resumen: Clase derivada que hereda de Cuenta e introduce una tasa de interés.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: CuentaAhorros

    Responsabilidades:
    - Heredar el comportamiento financiero base de la clase Cuenta.
    - Administrar un atributo específico para la tasa de interés de ahorros.
    - Aplicar el porcentaje de interés acumulado directamente sobre el saldo de la cuenta.

    Colaboradores:
    - Cuenta: Hereda directamente de ella compartiendo sus atributos y métodos públicos/protegidos.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H
#include "Cuenta.h"

class CuentaAhorros: public Cuenta{

private:
double tasaInteres;

public:
CuentaAhorros(int auxIdTitular, const std::string& auxId, long auxSaldo, const std::string& auxTipo);
void setTasaInteres(double auxInteres);
double getTasaInteres();
void aplicarInteres();

};

#endif
