/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Modelo.h
    Resumen: Definición de la clase Modelo, núcleo lógico que coordina el estado del banco y sus transacciones.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: Modelo

    Responsabilidades:
    - Centralizar las operaciones de negocio del sistema bancario (consignaciones, retiros, consultas).
    - Ordenar al sistema de persistencia la carga y guardado de los datos financieros.
    - Crear y verificar las entidades principales como Bancos, Titulares, Cuentas y Clientes.
    - Gestionar de forma segura la liberación de memoria dinámica al cerrar el sistema.

    Colaboradores:
    - Banco: Mantiene el objeto real que representa el banco actual en ejecución.
    - Parse: Utiliza la clase Parse para serializar y deserializar los datos en formato JSON.
    - Titular / Cuenta / Cliente: Modifica y añade instancias dinámicas a cada estructura.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#ifndef MODELO_H
#define MODELO_H
#include "Banco.h"
#include "Cliente.h"
#include "Cuenta.h"
#include <vector>


class Modelo {

private:
Banco banco;

public:
Modelo();
bool cargarBanco(); // cargarVectorCuentas(): void  //Carga un vector de cuentas de un json // cargarVectorClientes(): void //Carga un vector de clientes de un json
void crearBanco();
Banco& getBanco();
bool verificarTitular(int idTitular);
bool verificarCuenta(int idTitular, std::string idCuenta);
bool verificarCliente(int idTitular, std::string idCliente);
void crearTitular(int idTitular, std::string tipoTitular, std::string fechaVinculacion); //se crea un objeto titular con dos ojetos Cliente&  y Cuenta& allá en titular el recibe titular(cliente*, cuenta*)
void crearCuenta(int idTitular, std::string id, long saldo, int tipoCuenta); //Se crea objeto cuenta y se envía al vector de cuentas.
void crearCliente(int idTitular, std::string identificacion,std::string nombre,std::string telefono); //Se crea un objeto cliente y se envía al vector cliente.
void consignarDinero(int dinero,int idProceso, std::string idCuenta);
void retirarDinero(int dinero,int idProceso, std::string idCuenta);
int consultarSaldo(int idProceso, std::string idCuenta);
void limpiar();
};

#endif
