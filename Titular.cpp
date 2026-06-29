/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Titular.cpp
    Resumen: Definición de la clase Titular, que agrupa punteros de cuentas y clientes bajo una misma identidad bancaria.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: Titular

    Responsabilidades:
    - Actuar como contenedor intermedio que asocia clientes y cuentas bancarias.
    - Almacenar la fecha de vinculación, el tipo de titularidad y el ID único de titular.
    - Proveer los vectores de punteros a Clientes y Cuentas asociadas, permitiendo la agregación dinámica de los mismos.

    Colaboradores:
    - Cliente: Almacena punteros a los objetos Cliente vinculados a esta titularidad.
    - Cuenta: Almacena punteros a los objetos Cuenta (Ahorros o Corriente) vinculados a esta titularidad.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor: 
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/


#include "Titular.h"


Titular::Titular(int auxID,std::string auxTipo,std::string auxFecha): idTitular(auxID), tipoTitular(auxTipo),fechaVinculacion(auxFecha){
}

Titular::Titular(std::vector<Cliente*> auxClientes,std::vector<Cuenta*> auxCuentas,int auxID,std::string auxTipo,std::string auxFecha): clientes(auxClientes),cuentas(auxCuentas),idTitular(auxID), tipoTitular(auxTipo),fechaVinculacion(auxFecha){
}

std::string Titular::getTipoTitular(){
  return tipoTitular;
}

std::string Titular::getFechaVinculacion(){
return fechaVinculacion;
}

std::vector<Cliente*>& Titular::getClientes(){
 return clientes;
}

void Titular::addCliente(Cliente* cliente){
  clientes.push_back(cliente);
}

std::vector<Cuenta*>& Titular::getCuentas(){
 return cuentas;
}

void Titular::addCuenta(Cuenta* cuenta){
  cuentas.push_back(cuenta);
}


int Titular::getIdTitular(){
  return idTitular;
}
