/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: CuentaCorriente.cpp
    Resumen: Clase derivada que hereda de Cuenta e introduciendo un límite de sobregiro.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.


    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#include"CuentaCorriente.h"

CuentaCorriente::CuentaCorriente(int auxIdTitular, const std::string& auxId, long auxSaldo, const std::string& auxTipo):Cuenta(auxIdTitular,auxId,auxSaldo, auxTipo){
  limiteSobregiro = 120000;
}


void CuentaCorriente::setLimiteSobregiro(long limite){
  limiteSobregiro = limite;
}

long CuentaCorriente::getLimiteSobregiro(){
  return limiteSobregiro;
}

bool CuentaCorriente::retirarDinero(long cantidad){
  if(cantidad <= (saldo+limiteSobregiro)){
    saldo -= cantidad;
    return true;
  }
  else{
  return false;
  }
}
