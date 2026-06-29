/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Cliente.cpp
    Resumen: Definición de la clase Cliente, que representa los datos personales de un usuario asociado a una titularidad.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#include "Cliente.h"

Cliente::Cliente(int auxIdTitular, std::string auxIdentificacion,std::string auxNombre,std::string auxTelefono): idTitular(auxIdTitular), identificacion(auxIdentificacion), nombre(auxNombre), telefono(auxTelefono){
}

int Cliente::getIdTitular(){
  return idTitular;
}

std::string Cliente::getIdentificacion(){
 return identificacion;
}

std::string Cliente::getNombre(){
 return nombre;
}

std::string Cliente::getTelefono(){
 return telefono;
}

void Cliente::setIdentificacion(std::string codigo){
  identificacion = codigo;
}

void Cliente::setNombre(std::string auxNombre){
 nombre = auxNombre;
}

void Cliente::setTelefono(std::string auxTelefono){
 telefono = auxTelefono;
}

Cliente::~Cliente(){
}
