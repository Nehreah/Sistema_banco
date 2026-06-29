/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: CuentaAhorros.cpp
    Resumen: Clase derivada que hereda de Cuenta e introduce una tasa de interés.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#include "CuentaAhorros.h"

CuentaAhorros::CuentaAhorros(int auxIdTitular, const std::string& auxId, long auxSaldo, const std::string& auxTipo):Cuenta(auxIdTitular,auxId, auxSaldo, auxTipo){
  tasaInteres = 2.5;
}

void CuentaAhorros::setTasaInteres(double auxInteres){
 tasaInteres = auxInteres; 
}

double CuentaAhorros::getTasaInteres(){
  return tasaInteres;
}


void CuentaAhorros::aplicarInteres(){
  saldo += saldo*tasaInteres;
}

