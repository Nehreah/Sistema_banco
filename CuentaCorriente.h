/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: CuentaCorriente.h
    Resumen: Clase derivada que hereda de Cuenta e introduciendo un límite de sobregiro.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: CuentaCorriente

    Responsabilidades:
    - Heredar el comportamiento financiero base de la clase Cuenta.
    - Administrar un límite económico de sobregiro permitido.
    - Sobrescribir el método de retiro de dinero para validar el saldo disponible sumando el cupo de sobregiro.

    Colaboradores:
    - Cuenta: Hereda directamente de ella modificando su comportamiento de retiro.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include "Cuenta.h"

class CuentaCorriente: public Cuenta{

private: 
long limiteSobregiro;

public:
CuentaCorriente(int auxIdTitular, const std::string& auxId, long auxSaldo, const std::string& auxTipo);
void setLimiteSobregiro(long limite);
long getLimiteSobregiro();
bool retirarDinero(long cantidad) override;


};

#endif
