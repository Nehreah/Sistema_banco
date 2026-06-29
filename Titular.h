/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Titular.h
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

#ifndef TITULAR_H
#define TITULAR_H
#include "Cuenta.h"
#include "Cliente.h"
#include <string>
#include <vector>

class Titular{

private:
int idTitular;
std::string tipoTitular;
std::string fechaVinculacion;
std::vector<Cliente*> clientes;
std::vector<Cuenta*> cuentas;

public:
Titular(int auxID, std::string auxTipo,std::string auxFecha);
Titular(std::vector<Cliente*> auxClientes,std::vector<Cuenta*> auxCuentas,int auxID, std::string auxTipo,std::string auxFecha);
std::string getTipoTitular();
std::string getFechaVinculacion();
std::vector<Cliente*>& getClientes();
void addCliente(Cliente* cliente);
std::vector<Cuenta*>& getCuentas(); 
void addCuenta(Cuenta* cuenta);
int getIdTitular();
};

#endif
