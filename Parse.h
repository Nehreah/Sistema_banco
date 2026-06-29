/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Parse.h
    Resumen: Definición de la clase Parse, encargada de la persistencia de datos en archivos JSON.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: Parse

    Responsabilidades:
    - Leer y procesar un archivo estructurado en formato JSON para guardar y restaurar el estado del banco.
    - Cargar de forma independiente y progresiva los titulares, clientes y cuentas.
    - Guardar el estado completo de la memoria orientada a objetos volcándolo de nuevo al archivo persistente.

    Colaboradores:
    - Banco: Recibe la referencia del banco para poblarlo de datos o extraer su estado actual.
    - Titular / Cuenta / Cliente: Reconstruye o lee estas instancias individuales para su procesamiento de entrada/salida.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#ifndef PARSE_H
#define PARSE_H
#include "Banco.h"
#include "Cliente.h"
#include "Cuenta.h"

class Parse{


public:
Parse();
bool cargarBanco(Banco& banco);
void cargarClientes(Banco& banco);
void cargarCuentas(Banco& banco);

void cargarTitulares(Banco& banco);

void guardar(Banco& banco);

};

#endif
