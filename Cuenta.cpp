/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Cuenta.cpp
    Resumen: Clase base abstracta/polimórfica que define el comportamiento general de una cuenta bancaria asociada a una titularidad.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/
#include "Cuenta.h"
#include <string>

Cuenta::Cuenta(int auxIdTitular,const std::string& auxId, long auxSaldo, const std::string& auxTipo):idTitular(auxIdTitular),id(auxId),saldo(auxSaldo), tipoCuenta(auxTipo){
}

int Cuenta::getIdTitular(){
  return idTitular;
}

std::string Cuenta::getNumeroCuenta(){
  return id;
}

long Cuenta::getSaldo(){
  return saldo;
}

std::string Cuenta::getTipoCuenta(){
  return tipoCuenta;
}

void Cuenta::setNumeroCuenta(std::string auxId){
  id = auxId;
}

void Cuenta::setSaldo(long auxSaldo){
  saldo = auxSaldo;
}

bool Cuenta::retirarDinero(long cantidad){
  if(cantidad<=saldo){
    saldo -= cantidad;
    return true;
  }
  else{
    return false;
  }
}

void Cuenta::consignarDinero(long cantidad){
  saldo += cantidad;
}

Cuenta::~Cuenta(){
}
