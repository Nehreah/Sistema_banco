/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Banco.h
    Resumen: Definición de la clase Banco, que gestiona el conjunto de titulares del sistema.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: Banco

    Responsabilidades:
    - Almacenar y administrar la colección de titulares del banco.
    - Verificar la existencia de titulares, cuentas y clientes específicos dentro de su estructura.
    - Permitir la adición y consulta de los titulares registrados.

    Colaboradores:
    - Titular: Contiene un vector de objetos Titular sobre los cuales realiza búsquedas y comprobaciones.
    - Cuenta: Accede indirectamente a través del titular para verificar IDs de cuentas.
    - Cliente: Accede indirectamente a través del titular para verificar IDs de clientes.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#ifndef BANCO_H
#define BANCO_H
#include <string>
#include <vector>
#include "Titular.h"
#include <stdexcept>

class Banco{

private:
std::string nombre;
std::vector<Titular> titulares;

public:
Banco(std::string auxNombre); 

std::string getNombre();
Titular& getTitular(int idTitular);
std::vector<Titular>& getTitulares();

bool verificarTitular(int idTitular);
bool verificarCuenta(int idTitular, std::string idCuenta);
bool verificarCliente(int idTitular,std::string idCliente);

void addTitular(Titular titular);
void setTitulares(std::vector<Titular> auxTitulares);
void setNombre(std::string auxNombre);

};

#endif
