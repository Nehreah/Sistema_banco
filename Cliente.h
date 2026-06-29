/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Cliente.h
    Resumen: Definición de la clase Cliente, que representa los datos personales de un usuario asociado a una titularidad.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: Cliente

    Responsabilidades:
    - Almacenar la información de identificación, nombre y teléfono de un cliente.
    - Vincular al cliente con un ID de titularidad específico.
    - Proveer métodos de acceso (getters) y modificación (setters) para sus atributos personales.

    Colaboradores:
    - Ninguno (Clase entidad pura).

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

class Cliente{
private:
int idTitular;
std::string identificacion, nombre, telefono;

public:
Cliente(int auxIdTitular, std::string auxIdentificacion, std::string auxNombre, std::string auxTelefono);
int getIdTitular();
std::string getIdentificacion();
std::string getNombre();
std::string getTelefono();
void setIdentificacion(std::string codigo);
void setNombre(std::string auxNombre);
void setTelefono(std::string auxTelefono);
~Cliente();
};

#endif
