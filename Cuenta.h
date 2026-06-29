/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Cuenta.h
    Resumen: Clase base abstracta/polimórfica que define el comportamiento general de una cuenta bancaria asociada a una titularidad.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: Cuenta

    Responsabilidades:
    - Almacenar el saldo, número de cuenta, tipo de cuenta y el ID del titular asociado.
    - Controlar las operaciones básicas de transacciones financieras (consignar y retirar dinero).
    - Servir de base para la especialización de diferentes tipos de cuentas mediante polimorfismo.

    Colaboradores:
    - Ninguno 

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#ifndef CUENTA_H
#define CUENTA_H
#include <string>

class Cuenta {

protected:
int idTitular;
std::string id;
long saldo;
std::string tipoCuenta;

public:
Cuenta(int idTitular, const std::string& auxId, long auxSaldo, const std::string& auxTipo);
int getIdTitular();
std::string getNumeroCuenta();
long getSaldo();
std::string getTipoCuenta();
void setNumeroCuenta(std::string auxId);
void setSaldo(long auxSaldo);
virtual bool retirarDinero(long cantidad);
void consignarDinero(long cantidad);
~Cuenta();

};

#endif
